//memcopy

void mymemcpy(void *d,void *s,int size)
{
	char *t1=(char *)d;
	char *t2=(char *)s;
	if(d==0||s==0)
		return;
	for(char i=0;i<size;i++)
	{
//		*((char *)d)=*((char *)s);
		*t2=*t1;
		*t2++;
		*t1++;
	}
}

#include<stdio.h>
int main()
{
	char s[40],d[40];
	int size;
	printf("Enter 2 strings:\n");
	scanf("%s%s",s,d);
	printf("Enter the size:\n");
	scanf("%d",&size);
	mymemcpy(&d,&s,size);
	printf("%s\n",d);
}

