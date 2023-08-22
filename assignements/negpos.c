#include<stdio.h>
int main()
{
	int n;
	printf("Enter a no.\n");
	scanf("%d",&n);
	if(((n >> 31) &  1 ) == 1)
		printf("It is a negative no.\n");
	else
		printf("not a negative no.\n");

}
