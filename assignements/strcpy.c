//string copy

int mystrcpy(char s[],char d[])
{
	int i,j;
	for(i=0;s[i]!=0;i++)
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
	mystrcpy(s,d);
	printf("source:%s\tdestination:%s\n",s,d);
}
