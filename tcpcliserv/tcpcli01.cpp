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


typedef sockaddr SA;
const int SERV_PORT = 9877;
const int MAXLINE = 100000;
void str_cli(FILE *fp, int sockfd)
{
	char sendline[MAXLINE], recvline[MAXLINE];
	while (fgets(sendline, MAXLINE, fp) != NULL)
	{
		write(sockfd, sendline, strlen(sendline));
		if (read(sockfd, recvline, MAXLINE) == 0)
		{
			printf("error\n");
			return ;
		}
		fputs(recvline, stdout);
	}
	return ;
}

int main(int argc, char **argv)
{
	int sockfd;
	struct sockaddr_in servaddr;
	if (argc != 2)
	{
		//std:cerr << "usage: error\n";
		return 1;
	}
	sockfd = socket(AF_INET, SOCK_STREAM, 0);
	memset(&servaddr, 0, sizeof(servaddr));
	servaddr.sin_family = AF_INET;
	servaddr.sin_port = htons(SERV_PORT);
	inet_pton(AF_INET, argv[1], &servaddr.sin_addr);
	connect(sockfd, (SA*)&servaddr, sizeof(servaddr));
	str_cli(stdin, sockfd);
	return 0;
}
