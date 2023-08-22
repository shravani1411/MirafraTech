#include<stdio.h>
int x=10,y=13;
int main()
{
int const *p=&x;

x=11;
p=&y;
printf("%d\t%d\t%d\n",x,*p,y);

}
