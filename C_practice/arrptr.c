//Array of pointers

#include<stdio.h>
int main()
{
	int x=5,y=10,z=15;
	int *arrp[5]={&x,&y};
	arrp[2]=&z;
	printf("%d\t%d\n",*arrp[0],x);
	printf("%d\t%d\n",*arrp[1],y);
	printf("%d\t%d\n",*arrp[2],z);
}
