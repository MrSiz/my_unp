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

/* test function
int main()
{
	return 0;
}
*/
