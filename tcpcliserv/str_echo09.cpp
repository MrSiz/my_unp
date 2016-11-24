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

void str_echo(int sockfd)
{
	ssize_t n;
	struct args args;
	struct result result;
	for (; ;)
	{
		if ((n = read(sockfd, &args, sizeof(args))) == 0)
			return;
		result.sum = args.arg1 + args.arg2;
		write(sockfd, &result, sizeof(result));
	}
}
/*
int main()
{

}
*/

