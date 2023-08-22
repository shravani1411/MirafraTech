#include<stdio.h>
//#define mask(n) (1<<n)
int main()
{
	char n;
	int i,j;
	printf("enter a no.\n");
	scanf("%x",&n);
/*	getchar();
	printf("enter the position\n");
	scanf("%d",&i);
	n=(n&(~(mask(n)<<i))|(n<<i));*/
	n=(n&(~(7<<5))|(n<<5));
	printf("%x\n",n);
}
