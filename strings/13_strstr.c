//string string

int mystrstr(char s[],char sub[])
{
	int i,j,d;
	for(i=0;s[i]!=0;i++)
	{
		d=i;
		for(j=0;s[d]!=0;j++,d++)
		{
			if(s[d]!=sub[j])
				break;
		}
		if(sub[j]==0)
		{
			return i;
		}
	}
	return -1;
}

#include<stdio.h>
int main()
{
	char s[40],sub[40];
	printf("Enter the string:\n");
	scanf("%s",s);
	printf("Enter the substring:\n");
	scanf("%s",sub);
	printf("%d\n",mystrstr(s,sub));
}

