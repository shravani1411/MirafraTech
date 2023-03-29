//atoi

int myatoi(char s[])
{
	int i,res=0;
	for(i=0;s[i];i++)
	{
		if(s[i]>='0'&&s[i]<='9')
		{
			res=res*10+s[i]-'0';
		}
		else
			break;
	}
	return res;
}

#include<stdio.h>
int main()
{
	char s[40];
	printf("Enter a string:\n");
	scanf("%s",s);
	int x=myatoi(s);
	printf("%d\n",x);
}
