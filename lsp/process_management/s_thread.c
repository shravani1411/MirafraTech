#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

void *alpha(void *arg)
{
	char i;
	for(i='a';i<='z';i++)
	{
		printf("%c\t",i);
	}
	printf("\n");
	getchar();
	pthread_exit(0);
}

int main()
{
	pthread_t t1;
	pthread_create(&t1,NULL,alpha,NULL);
	pthread_join(t1,NULL);
}
