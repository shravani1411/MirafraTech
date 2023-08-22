#include <stdio.h>
#include <pthread.h>
//#include <unistd.h>

//int a = 0;

/*void *(void *arg)
	
{	
//	int a;
	for(int i=0;i<=10;i++)
	{
	if(i>=0)
	{
		printf("positive no.s are:%d\n",i);
	}
	getchar();
	pthread_exit(0);
}

void *neg(void *arg)
{
for(int i=0;i<=)
}*/




int main()
{
	pthread_t t1,t2;
//	int a;
	pthread_create(&t1, NULL, inc, NULL);
	pthread_join(t1,NULL);
	pthread_create(&t2, NULL, dec, NULL);
	pthread_join(t2,NULL);
	printf("Shared data value is : %d\n", a);
	return 0;
}

