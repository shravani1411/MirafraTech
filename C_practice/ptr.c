#include<stdio.h>
int main()
{
int a=10;
int *p1=&a,**p2=&p1;
printf("a=%d\t&a=%p\t&p1=%p\n",*p1,p1,p2);
printf("a=%d\t&a=%p\tp1=%d\n",**p2,*p2,**p2);
}
