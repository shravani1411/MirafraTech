#include<stdio.h>
int main()
{
	int x;
	printf("Enter a no.\n");
	scanf("%d",&x);
	x=-(~x);
	printf("%d\n",x);
}
