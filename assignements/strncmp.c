//string compare

int mystrcmp(char s1[],char s2[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
		{
			if(s1[i]<s2[i])
				return -1;
			if(s1[i]>s2[i])
				return 1;
		}
	if(i==n)
		return 0;
}


#include<stdio.h>
int main()
{
	char s[40],d[40];
	int n;
	printf("Enter 2 strings:\n");
	scanf("%s%s",s,d);
	printf("Enter the number:\n");
	scanf("%d",&n);
	printf("%d\n",mystrcmp(s,d,n));
}
