#include<stdio.h>
int func()
{
	static int x=2;
	printf("x=%d\n",x);
	x++;
}

int main()
{
	func();
	func();
	return 0;
}
