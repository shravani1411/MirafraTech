//string concatination

int cat(char d[],char s[])
{
	int i,j;
	for(j=0;d[j]!=0;j++);
	for(i=0;s[i]!=0;i++,j++)
	{
		d[j]=s[i];
	}
}

#include<stdio.h>
int main()
{
	char s[40];
	char d[40];
	printf("Enter 2 strings:\n");
	scanf("%s%s",s,d);
	cat(d,s);
	printf("%s\n",d);
}
