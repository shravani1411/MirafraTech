
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter a no.\n");
	scanf("%x",&n);
	for(i = 0,j = 31; i<j; i++, j--) 
	{ 
		if( (n & ( 1 << j)) != (n & (1 << i)))
		{
			n=n^(1<<j);
			n=n^(1<<i);
//			printf("%d\n",n);
		}
	}
	printf("%x\n",n);
}
