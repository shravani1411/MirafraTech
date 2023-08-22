#include<stdio.h>
struct bitfield
{
	char x:2;
	char y:6;
}b;

int main()
{
	b.x=6;
	b.y=4;
	printf("%d\t%d\n",b.x,b.y);
}
