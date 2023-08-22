#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//void structure(struct xyz *a);
struct xyz
{
	int x;
	char y[20];
	float z;
//	int *b;
};
void structure(struct xyz *a);

int main()
{
	
	struct xyz a;
//	struct xyz *p=&a;
	printf("enter integer, string & float:\n");
//	scanf("%d%s%f",&p->x,p->y,&p->z);
//	printf("%d\t%s\t%f\n",p->x,p->y,p->z);
	scanf("%d%s%f",&a.x,a.y,&a.z);
	printf("%d\t%s\t%f\n",a.x,a.y,a.z);
	structure(&a);


}

void structure(struct xyz *a)
{
a->x=20;
strcpy(a->y,"shravs");
printf("%d\t%s\n",a->x,a->y);

}
