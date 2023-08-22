//memcopy

void mymemcpy(void *d,void *s,int size)
{
	if(d==0||s==0)
		return;
	for(char i=0;i<size;i++)
	{
		*((char *)d)=*((char *)s);
		d++;
		s++;
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
