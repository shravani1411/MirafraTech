//string copy

int mystrcpy(char s[],char d[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		d[i]=s[i];
	}
}

#include<stdio.h>
int main()
{
	char s[40],d[40];
	printf("Enter source destination strings:\n");
	scanf("%s%s",s,d);
	int n;
	printf("Enter a number:\n");
	scanf("%d",&n);
	mystrcpy(s,d,n);
	printf("source:%s\tdestination:%s\n",s,d);
}
