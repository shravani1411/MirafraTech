#include<stdio.h>

const static int x=20;
const static int y;
int static a=10;
int static b;
char *c="xyz";

int main()
{
	static int x=30;
	const static int y;
	int *p=&x;
	int a=100,b;
	printf("%p\n",x);

}
