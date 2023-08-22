#include <stdio.h>

int binarytodecimal(int b)
{
	int d = 0, base = 1, rem;
	while (b != 0) 
	{
		rem = b % 10;
		b /= 10;
		d += rem*base;
		base=base*2;
	}
	return d;
}

int main() 
{
	int b,n;
	printf("Enter a binary number:\n");
	scanf("%d",&b);
	n=binarytodecimal(b);
	printf("Decimal equivalent: %d\n",n);
	return 0;
}
