#include<stdio.h>
struct abc
{
//static int x;	//xxx
int x;
char y[10];

};

int main()
{
static struct abc s;
printf("enter the id & name\n");
scanf("%d%s",&s.x,s.y);
printf("id=%d\nname=%s\n",s.x,s.y);
}
