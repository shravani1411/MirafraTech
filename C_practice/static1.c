#include"header.h"
int fun();
int main()
{
	{
		int i=8;
	}
	printf("%d\n",i);
	i++;
	fun();
}
