//Bit swap

#include<stdio.h>
int main()
{
	int n,res,x,y;
	n=0x69;
	res=((n>>2)&0x03)^((n>>5)&0x03);

	x=(res<<2)|(res<<5);
	x=x^n;
	printf("%x\n",x);
}
