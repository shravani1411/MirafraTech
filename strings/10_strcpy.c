#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	char d[100];
	int i;
	printf("enter 2 strings:\n");
	scanf("%s%s",s,d);
	for(i=0;d[i]=s[i];i++);
	
		printf("%s\n",d);
	
}
