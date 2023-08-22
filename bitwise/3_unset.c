//How to unset the rightmost set bit of a number?

#include<stdio.h>
int main()
{
	int x;
	printf("Enter the no.\n");
	scanf("%d",&x);
	x=x&(x-1);
	printf("%d\n",x);
}
