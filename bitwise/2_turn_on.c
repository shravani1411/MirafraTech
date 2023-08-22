//1. Turn off k’th bit in a number

#include<stdio.h>
int main()
{
	int n,k;
	printf("Enter 2 numbers:\n");
	scanf("%x%x",&n,&k);
	n=n|(1<<(k-1));
	printf("%x\n",n);
}

