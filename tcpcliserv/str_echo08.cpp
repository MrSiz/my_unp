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

//server deal with the data
void str_echo(int sockfd)
{
	long arg1, arg2;
	ssize_t n;
	char line[MAXLINE];
	
	for (; ;)
	{
		if ((n = (read(sockfd, line, MAXLINE)) == 0))
			return ;
		if ((sscanf(line, "%ld%ld", &arg1, &arg2) == 2))
			snprintf(line, sizeof(line), "%ld\n", arg1 + arg2);
		else
			snprintf(line, sizeof(line), "input error\n");
		n = strlen(line);
		write(sockfd, line, n);
	}
}

/* test function
int main()
{
	
}
*/
