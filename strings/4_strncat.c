//string concantenation

int mystrncat(char d[],char s[],int n)
{
	int i,j;
	for(j=0;d[j]!=0;j++);
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
	mystrncat(d,s,n);
	printf("%s\n",d);
}
