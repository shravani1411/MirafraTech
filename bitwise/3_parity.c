//Problem 4. Computing parity of a number

#include<stdio.h>
int main()
{
	int i,n,c=0;
	printf("Enter a no.\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
//	for(i=0;i<8;i++)
	{
//		if((n&0x01)>0)
		n=n&(n-1);
			c++;
//	n=n>>1;
	}

	printf("count %d\n",c);
	if((c&0x01)==0)
		printf("Even parity\n");
	else
		printf("Odd parity\n");
}
