#include "unp.h"

int main(int argc, char **argv)
{
    if (argc != 3){
        err_quit("usage: <a.out> <ip> <port>");
    }
    int connfd = Socket(AF_INET, SOCK_STREAM, 0);
    char buff[MAXLINE];
    struct sockaddr_in serv;
    serv.sin_family = AF_INET;
    Inet_pton(AF_INET, argv[1], &serv.sin_addr);
    serv.sin_port = htons(atoi(argv[2]));
    if ( connect(connfd, (SA*)&serv, sizeof(serv)) == 0){
        Read(connfd, buff, sizeof(buff));
        puts(buff);
    }
    return 0;
}