//string copy

int mystrlcpy(char d[],const char s[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		d[i]=s[i];
	}
	d[i]=0;
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
	mystrlcpy(d,s,n);
	printf("source:%s\tdestination:%s\n",s,d);
}
