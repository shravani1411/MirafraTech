//string concantenation

int mystrncat(char s[],char d[],int n)
{
	int i,j;
	for(j=0;s[j]!=0;j++);
	for(i=0;i<n;i++,j++)
	{
		d[j]=s[i];
	}
	d[j]=0;
}

#include<stdio.h>
int main()
{
	char s[40],d[40];
	int n;
	printf("Enter 2 strings:\n");
	scanf("%s%s",s,d);
	printf("Enter the number:\n");
	scanf("%d",&n);
	mystrncat(s,d,n);
	printf("%s\n",d);
}
