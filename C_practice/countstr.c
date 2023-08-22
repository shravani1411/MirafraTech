#include<stdio.h>
int main()
{
	char s[100];
	int i,j;
	char count=0;
	printf("enter the string:\n");
	scanf("%s",s);
	for(i=0;s[i]!=0;i++)
	{
		count=0;
		for(j=i+1;s[j]!=0;j++)
		{
		if(s[i]==s[j])
		{
			count++;

			printf("%c\t is repeated %d times\n",s[i],count+1);

		}
	}

	//		printf("%s\t is repeated %d times\n",s[i],count);
	}
//	printf("%s is repeated %d times\n",s[i],count);

}
