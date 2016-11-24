#include "my_unp.h"

void sig_pipe(int signo)
{
	printf("SIGPIPE received\n");
	return ;
}

int main(int argc, char **argv)
{
	int sockfd;
	struct sockaddr_in servaddr;
	if (argc != 2)
	{
		printf("usage: tcpcli <IPADDRESS>");
		exit(1);
	}
	sockfd = socket(AF_INET, SOCK_STREAM, 0);
	bzero(&servaddr, sizeof(servaddr));
	servaddr.sin_family = AF_INET;
	servaddr.sin_port = htons(13);
	inet_pton(AF_INET, argv[1], &servaddr.sin_addr);
	signal(SIGPIPE, sig_pipe);
	connect(sockfd, (SA *)&servaddr, sizeof(servaddr));
	sleep(2);
	write(sockfd, "hello", 5);
	sleep(2);
	write(sockfd, "world", 5);
	exit(0);
}
