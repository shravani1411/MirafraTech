#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *p1,*p2,i;
	p1=(int*)malloc(sizeof(int)*4);
	p2=p1;
	for(i=1;i<=5;i++)
	{
		*p1=i*20;
		p1++;
	}
	printf("end\n");
	free(p2);
}



