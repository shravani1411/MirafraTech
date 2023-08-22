#include<stdio.h>
int main()
{
	double a=10;
	int *p1=&a;
	int *p2=(&a)+4;
	printf("%d\n",p2-p1);
}
