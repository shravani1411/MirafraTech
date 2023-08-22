#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number:\n");
	scanf("%d",&n);
	if((n&(n-1))==0)
		printf("power of 2\n");
	else
		printf("not a power of 2\n");
}
