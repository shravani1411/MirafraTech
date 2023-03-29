//Bit swap

#include<stdio.h>
int main()
{
int n,p,q,x,y;
n=0x52;
p=(n>>0)&0x03;
q=(n>>6)&0x03;
x=p^q;
x=(x<<0)|(x<<6);
x=x^n;
printf("%x\n",x);
}
