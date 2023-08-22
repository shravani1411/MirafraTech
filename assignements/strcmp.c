//string compare

int strcmp(char s1[],char s2[])
{
	int i,j;
	for(i=0,j=0;s1[i]!=0&&s2[j]!=0;i++,j++)
	{
		if(s1[i]<s2[j])
		{
			return -1;
		}
		if(s1[i]>s2[j])
		{
			return 1;
		}

		if(s1[i]==0&&s2[j]==0)
			return 0;
		if(s1[i]!=0&&s2[j]==0)
			return -1;
		if(s1[i]==0&&s2[j]!=0)
			return 1;
	}
}

#include<stdio.h>
int main()
{
	char s1[40],s2[40];
	printf("Enter 2 strings:\n");
	scanf("%s%s",s1,s2);
	printf("%d\n",strcmp(s1,s2));
}

