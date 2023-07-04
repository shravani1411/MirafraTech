#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void)
{
	pid_t pid;
	pid = fork();
	if (pid == 0) {
		printf("Child Process\n");
		execl("./fork","ls","-l",(char *)0);	
		printf ("This won’t Print\n");
	}
	else
		sleep(5);
		printf("Parent Process\n");
}
