#include<stdio.h>
#define mask(i,j) (1<<i)|(1<<j)
int main()
{
	int x,y,res,i,j;
	printf("enter the hex no.\n");
	scanf("%x",&x);
	printf("enter the positions\n");
	scanf("%d%d",&i,&j);
//	mask=(1<<i)|(1<<j);
	if(((x>>i)&1)!=((x>>j)&1)){

	res=((x>>i)^mask(i,j))^((x>>j)^mask(i,j));
	y=(res<<i)|(res<<j);
	y=y^x;
	printf("%x\n",y);
	}
}
