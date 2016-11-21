#include <signal.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>

void sig_chld(int signo)
{
	pid_t pid;
	int stat;
	
	pid = wait(&stat);
	//not good to use printf in sigaction function
	printf("child %d terminated\n", pid);
	return ;
}

/*
int main()
{
	return 0;
}
*/

