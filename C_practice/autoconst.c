#include<stdio.h>
int main()
{
	auto int x=10,y;
	int *const p=&x;
	//p=&x;		xxx
	//p=&y;		xxx
	x=12;
	*p=11;
	//int const *p=&x;
	//p=&y;	possible

	y=12;
	//*p=11;	xxx
	printf("%d\n",*p);


}
