//string concatination

int cat(char s[],char d[])
{
	int i,j;
	for(j=0;d[j]!=0;j++);
	for(i=0;d[i]!=0;i++,j++)
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
	cat(s,d);
	printf("%s\n",d);
}
