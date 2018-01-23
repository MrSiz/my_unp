#include "unp.h"

void str_echo08(int sockfd);

int main(int argc, char **argv)
{
    int listenfd, connfd;
    pid_t childpid;
    socklen_t clilen;
    struct sockaddr_in cliaddr, servaddr;
    puts("run now......");
    listenfd = Socket(AF_INET, SOCK_STREAM, 0);
    servaddr.sin_family = AF_INET;
    servaddr.sin_port = htons(SERV_PORT);
    servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
    Bind(listenfd, (SA*)&servaddr, sizeof(servaddr));

    Listen(listenfd, LISTENQ);
    Signal(SIGCHLD, sig_chld);

    for (;;){
        clilen = sizeof(cliaddr);
        connfd = Accept(listenfd, (SA*)&cliaddr, &clilen);

        if ( (childpid = Fork()) == 0){
            Close(listenfd);
            str_echo08(connfd); //1
            exit(EXIT_SUCCESS);
        }
        Close(connfd);
    }
    return 0;
}