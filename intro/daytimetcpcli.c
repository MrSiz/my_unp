#include "unp.h"

#define show_ip(src) fputs(src, stdout)


int main(int argc, char **argv)
{
    int sockfd, n;
    char recvline[MAXLINE + 1];
    struct sockaddr_in servaddr;


    if (argc != 3){
        err_quit("usage: a.out <IPaddress> <port>");
    }
    if ( (sockfd = socket(AF_INET, SOCK_STREAM, 0)) < 0){
        err_sys("socket error");
    }
//    puts("111");
//    fflush(stdout);
    bzero(&servaddr, sizeof(servaddr));
    servaddr.sin_family = AF_INET;
    int port = atoi(argv[2]);
    servaddr.sin_port = htons(port);
    if (inet_pton(AF_INET, argv[1], &servaddr.sin_addr) <= 0){
        err_quit("inet_pton error for %s", argv[1]);
    }
//    puts("dftwer");
//    show_ip(argv[1]);
//    fprintf(stdout, "%d", servaddr.sin_addr);
    int ret;
    if (ret = connect(sockfd, (SA*)&servaddr, sizeof(servaddr)) < 0){
        err_sys("connect error");
    }
//    puts("there");
    if (ret == 0)
        puts("right");

    while ( (n = read(sockfd, recvline, MAXLINE)) > 0){
        recvline[n] = '\0';
        puts("enter");
        if (fputs(recvline, stdout) == EOF){
            err_sys("fputs error");
        }
    }
    if (n == 0)
        puts("why");
    if (n < 0)
        err_sys("read error");
    exit(0);
}