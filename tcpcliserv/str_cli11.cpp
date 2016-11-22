#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>
#include <readline/history.h>
#include <sys/socket.h>
#include <unistd.h>

typedef sockaddr SA;
const int SERV_PORT = 9877;
const int MAXLINE = 100000;
const int LISTENQ = 20;

void str_cli(FILE *fp, int sockfd)
{
	char sendline[MAXLINE], recvline[MAXLINE];
	while (fgets(sendline, MAXLINE, fp) != NULL)
	{
		write(sockfd, sendline, 1);
		sleep(1);
		write(sockfd, sendline + 1, strlen(sendline) - 1);
		if (read(sockfd, recvline, MAXLINE) == 0)
		{
			printf("str_cli: server terminated prematurely\n");
			exit(0);
		}
		fputs(recvline, stdout);
	}
}

/*
int main()
{

}
*/
