
#include<stdio.h>
int x=21;
int main()
{
	extern int y;
	printf("%d\t%d\n",x,y);
}
int y=31;
