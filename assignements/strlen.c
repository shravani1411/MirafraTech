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
	char s[40];
	printf("Enter the string:\n");
	scanf("%s",s);
	//mystrlen(s);
	printf("%u\n",mystrlen(s));
}
