#include<stdio.h>
int main()
{
	int n;
	char c;
	printf("Enter a no.\n");
	scanf("%x",&n);
	n=((n&0xf0)>>4)|((n&0x0f)<<4);
	n=(n>>4)|(n<<4);
	printf("%x\n",n);
}
