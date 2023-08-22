//Pionter to an array

#include<stdio.h>
int main()
{
	int arr[3]={1,2,3};
	int (*parr)[3];
	parr=&arr;
	printf("%d\n",parr[0][0]);
	printf("%d\n",(*parr)[1]);
	printf("%d\n",*(arr+2));
}
