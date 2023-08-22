//string copy
#include<stdio.h>
#include<string.h>

void mystrcpy(char d[],char s[]);
int main()
{
	char s[100];
	char d[100];
	printf("Enter source destination strings:\n");
	scanf("%s",s);
	printf("enter string 2:\n");
	scanf("%s",d);
	mystrcpy(d,s);
	printf("%s\n",d);
}

void mystrcpy(char d[],char s[])

{
	int i;
	for(i=0;s[i]!=0;i++)
	{
		d[i]=s[i];
	}
}
