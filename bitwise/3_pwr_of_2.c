//1. Check if a positive integer is a power of 2 without using any branching or loop.

#include<stdio.h>
int main()
{
	int n;
	printf("Enter the no.\n");
	scanf("%d",&n);
	//if((x&(x-1))==0)
	if((n&-n)==n)
		printf("It is power of 2\n");
	else
		printf("Not a power of 2\n");
}
