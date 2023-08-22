
#include<stdio.h>
int main()
{
auto const int x=10;
//int *p;
int *const p=&x;

//p=&x;
*p=12;
//scanf("%d",&x);
//x=12;
printf("%d\n",x);

}
