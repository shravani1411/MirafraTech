#include<stdio.h>
void strrev(char s[]);
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
		printf("%s\n",s);
		strrev(s);
}

void strrev(char s[])
{
	int l,i,j;
for(l=0;s[l]!=0;l++);
for(i=l-1,j=0;i>=0&&j<l/2;i--,j++)
{
int temp;
if(s[i]==' ')
{
temp=s[i];
s[i]=s[j];
s[j]=temp;
}
}
printf("%s\n",s);
}
