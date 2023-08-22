#include<stdio.h>
int main()
{
	int i,j,l,n;
	char s[40];
	printf("Enter the string\n");
	scanf("%39[^\n]s",s);
	for(l=0;s[l]!=0;l++);

	for(i=l-1,j=0;i>=0&&j<l/2;i--,j++)
	{
		int t;
		t=s[i];
		s[i]=s[j];
		s[j]=t;
	}

//	for(i=0;i<n;i++)
//	{
		printf("%s\n",s);
//	}
}
