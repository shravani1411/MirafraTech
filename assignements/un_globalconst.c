#include<stdio.h>
int x,y;
int main()
{
int const *p=&x;

x=11;
p=&y;
printf("%d\t%d\t%d\n",x,*p,y);

}
