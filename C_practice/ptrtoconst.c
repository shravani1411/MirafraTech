#include<stdio.h>
int main()
{
	int x=5;
//	int *p;
//	int const *p;
	const int *p;
	p=&x;
//	*p=10;
	x=20;
	printf("%d\n",x);
}
