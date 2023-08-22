//string lenght

int mystrlen(char s[])
{
	int i,l;
	for(i=0;s[i]!=0;i++)
	{
		l=i;
	}
	return i;
}


#include<stdio.h>
int main()
{
	char s[100];
	int x;
	printf("Enter the string:\n");
	scanf("%99[^\n]s",s);
	x=mystrlen(s);
	printf("%u",x);
}
