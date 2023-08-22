#include<stdio.h>
int main()
{
	int n;
	printf("Enter a no.\n");
	scanf("%d",&n);
	if((n&1)==0)
	//if(n&0x01)
		printf("even\n");
	else
		printf("odd\n");
}
