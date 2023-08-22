#include<stdio.h>
int main()
{
	int x=0x69,i=2,j=5,res;
	res=(x>>2)^(x>>5);
	res=((res<<2)|(res<<5));
	x^=res;
	printf("%x\n",x);
}
