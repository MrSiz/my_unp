#include <sys/socket.h>
#include <stdio.h>
#include <iostream>
#include <unistd.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <string.h>
#include <errno.h>

typedef sockaddr SA;
const int SERV_PORT = 9877;
const int LISTENQ = 20;
const int MAXLINE = 100000;
void str_echo(int sockfd)
{
	ssize_t n;
	char buf[MAXLINE];
	again:
		while ((n = read(sockfd, buf, MAXLINE)) > 0)
			write(sockfd, buf, n);
		if (n < 0 && errno == EINTR)
			goto again;
		else if (n < 0)
			std::cerr << "str_echo: read error";
	return;
}

int main(int argc, char **argv)
{
	int listenfd, connfd;
	pid_t childpid;
	socklen_t  clilen;
	struct sockaddr_in cliaddr, servaddr;
	listenfd = socket(AF_INET, SOCK_STREAM, 0);
	if (listenfd == -1)
	{
		std::cout << "error\n";
		return 1;
	}
	memset(&servaddr, 0, sizeof(servaddr));
	servaddr.sin_family = AF_INET;
	servaddr.sin_addr.s_addr = htons(INADDR_ANY);
	servaddr.sin_port = htons(SERV_PORT);
	if (bind(listenfd, (SA *)&servaddr, sizeof(servaddr)) == -1)
	{
		std::cerr << "error bind\n";
		return 1;
	}
	if (listen(listenfd, LISTENQ) == -1)
	{
		std::cerr << "error listen\n";
		return 1;
	}
	for (;;)
	{
		clilen = sizeof(cliaddr);
		if ((connfd = accept(listenfd, (SA *)&cliaddr, &clilen)) == -1)
		{
			std::cerr << "error\n";
			return 1;
		}
		if ((childpid = fork()) == 0)
		{
			close(listenfd);
			str_echo(connfd);
			exit(0);
		}
		close(connfd);
	}
}
