//Problem 2. Find the position of the rightmost set bit

#include<stdio.h>
int main()
{
	int n;
	printf("Enter the no.\n");
	scanf("%d",&n);
	n=(n&(n-1))^n;
	printf("%x\n",n);
}
