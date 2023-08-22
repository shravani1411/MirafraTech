#include<stdio.h>
#define mysizeof(y) (char*)(&y+1)-(char*)(&y)
int main()
{
	int x=10;
	float y=12.0;
	char c='s';
	double d=10;
	printf("%p\n",&c);
	printf("%p\n",(&c+1));
	printf("%ld\t%ld\t%ld\t%ld\n",mysizeof(x),mysizeof(y),mysizeof(c),mysizeof(d));

}
