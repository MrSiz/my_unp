#include <sys/socket.h>
#include <stdio.h>
#include <iostream>
#include <unistd.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <string.h>
#include <errno.h>
#include <arpa/inet.h>
#include <stdio.h>    
#include <readline/readline.h>
#include <readline/history.h>
#include <sys/types.h>
#include <sys/wait.h>

typedef sockaddr SA;
const int SERV_PORT = 9877;
const int MAXLINE = 100000;
const int LISTENQ = 20;

void sig_chld(int signo)
{
	pid_t pid;
	int stat;
	while ((pid = waitpid(-1, &stat, WNOHANG)) > 0)
		printf("child %d terminated\n", pid);
	return ;
}

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

int main()
{
	int listenfd, connfd;
	pid_t childpid;
	socklen_t clilen;
	struct sockaddr_in cliaddr, servaddr;
	void sig_chld(int);
	listenfd = socket(AF_INET, SOCK_STREAM, 0);
	bzero(&servaddr, sizeof(servaddr));
	servaddr.sin_family = AF_INET;
	servaddr.sin_addr.s_addr = htons(INADDR_ANY);
	servaddr.sin_port = htons(SERV_PORT);
	bind(listenfd, (SA *)&servaddr, sizeof(servaddr));
	listen(listenfd, LISTENQ);
	signal(SIGCHLD, sig_chld);
	for (; ; )
	{
		clilen = sizeof(cliaddr);
		if ((connfd = accept(listenfd, (SA *)&cliaddr, &clilen)) < 0)
		{
			if (errno == EINTR)
				continue;
			else
			{
				printf("error\n");
				exit(0);
			}
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
