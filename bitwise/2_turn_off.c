//1. Turn off k’th bit in a number

#include<stdio.h>
int main()
{
	int n,k,p;
	printf("Enter 2 numbers:\n");
	scanf("%d%d",&n,&k);
	p=n&~(1<<(k-1));
	printf("%d\n",p);
}

