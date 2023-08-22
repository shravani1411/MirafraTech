#include<stdio.h>
int func()
{
	auto int i=0;
	register int j=0;
	static int k=0;
	i++;j++;k++;
	printf("%d\t%d\t%d\n",i,j,k);
}

int main()
{
	func();
	func();
}


