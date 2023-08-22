#include<stdio.h>
union xyz
{
	int x;
	char y;
}u;

int main()
{
	union xyz u;
	u.x=1;
	u.y='S';
	printf("%d\t%c\n",u.x,u.y);
}
