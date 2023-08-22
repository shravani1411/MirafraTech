#include<stdio.h>

/*int powerof(int n)
{
	int i,count=0;
	if(((n&(n-1))==0)&&((n&n-2)==0))
		printf("power of four");
	else
		printf("not power of four");
}*/
int main()
{
	int n;
	printf("enter the value:\n");
	scanf("%d",&n);
	int a=n;
	if((a&(a-2))==0)
	{
		printf("It is power of four\n");
	}
	else
		printf("not");
}
