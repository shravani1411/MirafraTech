#include<stdio.h>
int num(int x);
int main()
{
	int x=1;
	num(x);
}

int num(int x)
{
	if(x==11)
	{
		return 1;
	}
	printf("%d\n",x);
	return num(x+1);

}

