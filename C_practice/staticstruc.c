#include<stdio.h>
static struct xyz
{
	int id;
	char name[10];
}s;

int main()
{
	//static struct xyz s;
	scanf("%d%s",&s.id,s.name);
	printf("id=%d name=%s\n",s.id,s.name);
}
