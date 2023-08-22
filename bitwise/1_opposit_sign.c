
#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter the 2 values:\n");
	scanf("%d%d",&x,&y);
	if((x=x^y)<0)
	{
		printf("Opposit sign\n");
	}
	else
	{
		printf("Not opposit sign\n");
	}

	printf("%d\n",x);
}
