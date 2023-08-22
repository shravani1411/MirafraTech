//string character first occurance

#include<stdio.h>
int mystrchar(char s[],char ch)
{
	int i;
	for(i=0;s[i]!=0;i++)
	{
		if(s[i]==ch)
		{
			break;
		}
	}
	return i;
}

#include<stdio.h>
int main()
{
	int x;
	char s[10];
	printf("Enter a string:\n");
	scanf("%s",s);
	getchar();
	char ch;
	printf("Enter a character:\n");
	scanf("%c",&ch);
	x=mystrchar(s,ch);
	printf("%d\n",x);
}
