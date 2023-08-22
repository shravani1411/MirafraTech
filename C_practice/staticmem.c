struct xyz
{
//static int x;	//xxx
int x;
};

#include<stdio.h>
int main()
{
static struct xyz s;
printf("Enter no.:");
scanf("%d",&s.x);
printf("%d\n",s.x);
}
