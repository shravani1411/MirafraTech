#include<stdio.h>
typedef struct xyz
{
	int *p;
}s;

int main()
{
	int c=9;
	s n;
	n.p=&c;
	printf("%d\n",*(n.p));
	printf("%p\n",(n.p));
}
