#include "unp.h"

int main(int argc, char **argv)
{
    int listenfd, connfd;
    struct sockaddr_in servaddr;
    char buff[MAXLINE];
    time_t ticks;
    socklen_t len;
    struct sockaddr_in cliaddr;
    listenfd = Socket(AF_INET, SOCK_STREAM, 0);
//    fprintf(stdout, "sdf");
//    fflush(stdout);
    bzero(&servaddr, sizeof(servaddr));

    servaddr.sin_family = AF_INET;
//    servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
    inet_pton(AF_INET, "127.0.0.1", &servaddr.sin_addr);
    servaddr.sin_port = htons(11111);
//    fprintf(stdout, "%d", listenfd);

    Bind(listenfd, (SA*)&servaddr, sizeof(servaddr));
    puts("ss");
    Listen(listenfd, LISTENQ);

    for (;;){
        len = sizeof(cliaddr);
        connfd = Accept(listenfd, (SA*)&cliaddr, &len);
        printf("connection from %s, port %d\n",
                inet_ntop(AF_INET, &cliaddr.sin_addr, buff, sizeof(buff)),
                ntohs(cliaddr.sin_port));
        ticks = time(NULL);
        snprintf(buff, sizeof(buff), "hhh%.24s\r\n", ctime(&ticks));

        Write(connfd, buff, strlen(buff));

        Close(connfd);
    }
}