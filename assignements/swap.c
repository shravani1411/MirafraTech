//Swap 2 variables without 3rd variable   (x = x+y; y= x-y; x = x-y;)

static inline void swap(int *p,int *q)
{
*p=*p+*q;
*q=*p-*q;
*p=*p-*q;
}


#include<stdio.h>

//static inline void swap(int ,int );
int main()
{
	int a,b;
	printf("Enter 2 numbers:\n");
	scanf("%d%d",&a,&b);
/*	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swap a=%d,b=%d\n",a,b);*/
	
	//Using bitwise operators
	
	a=a^b;
	b=a^b;
	a=a^b;
	printf("After swap using bitwise a=%d,b=%d\n",a,b);
	
	//using inline method
	swap(&a,&b);
	printf("After swap using inline method a=%d,b=%d\n",a,b);

}




