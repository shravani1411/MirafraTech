/*Implement all the string functions like 
  atoi	*/

int atoi(char s[])
{
	int i,sum=0;
	for(i=0;s[i]!=0;i++)
	{
		sum=sum*10+s[i]-48;
	}
}

#include<stdio.h>
int main()
{
	
	char s[40];
	printf("Enter a string:\n");
	scanf("%s",s);
	atoi(s);
	printf("%s\n",s);
}
