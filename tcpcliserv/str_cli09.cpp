#include "sum.h"
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
	char sendline[MAXLINE];
	struct args args;
	struct result result;
	while (fgets(sendline, MAXLINE, fp) != NULL)
	{
		if (sscanf(sendline, "%ld%ld", &args.arg1, &args.arg2) != 2)
		{
			printf("invalid input: %s", sendline);
			continue;
		}
		write(sockfd, &args, sizeof(args));
		if (read(sockfd, &result, sizeof(result)) == 0)
		{
			printf("str_cli: server terminated prematurely");
			exit(1);
		}
		printf("%ld\n", result.sum);
	}
}

int main()
{

}
