#include<stdio.h>
int i;
void inc();
void dec();
int main()
{
	printf("i=%d\n",i);
	inc();
	inc();
	dec();
	dec();
}

void inc()
{
	i=i+1;
	printf("non inc i=%d\n",i);
}

void dec()
{
	i=i-1;
	printf("non dec i=%d\n",i);
}
