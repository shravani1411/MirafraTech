//Decimal to binary conversion

#include<stdio.h>

/*void dectobin(int d)
{
	int b[32],i=0;
	while(d>0)
	{
		b[i]=d%2;
		d=d/2;
		i++;
	}
	for(int j=i-1;j>=0;j--)
		printf("%d",b[j]);
		printf("\n");
		}*/

int main()
{
	int d,rem,sum=0,j;
	printf("Enter a decimal no.:\n");
	scanf("%d",&d);
//	printf("Binary equivalent:");
	//	dectobin(d);
	for(j=1;d>0;j*=10)
	{
		rem=d%2;
		sum+=rem*j;
		d>>=1;

	}
		printf("%d\n",sum);
}
