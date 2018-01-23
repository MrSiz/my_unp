#include "unp.h"


void dg_cli_brd(FILE *fp, int sockfd, const SA *pservaddr, socklen_t servlen);
int main(int argc, char **argv)
{
    int sockfd;
    struct sockaddr_in servaddr;

    if (argc != 2){
        err_quit("usage: a <ip>");
    }
    puts("start");
    sockfd = Socket(AF_INET, SOCK_DGRAM, 0);

    bzero(&servaddr, sizeof(servaddr));
    servaddr.sin_family = AF_INET;
    servaddr.sin_port = htons(13);
    Inet_pton(AF_INET, argv[1], &servaddr.sin_addr);

    dg_cli_brd(stdin, sockfd, (SA*)&servaddr, sizeof(servaddr));

    exit(0);
}
