#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

int a = 0;

void *func(void *arg)
	
{
	for(int i=0;i<=10;i++)
	{
		printf("Before update gData: %d\n",a);
//		sleep(1);
		a++;
		printf("After  update gData: %d\n",a);
	}
	getchar();
//	pthread_exit(0);
}



int main(void)
{
	pthread_t t1;
	pthread_create(&t1, NULL, func, NULL);
	pthread_join(t1,NULL);
	printf("Shared data value is : %d\n", a);
	return 0;
}

