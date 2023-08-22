//3. Check if k’th bit is set for a number

#include<stdio.h>
int main()
{
	int n,k,p;
	printf("Enter a no. & position:\n");
	scanf("%d%d",&n,&k);
	p=n&(1<<(k-1));
	printf("%d\n",p);
}

