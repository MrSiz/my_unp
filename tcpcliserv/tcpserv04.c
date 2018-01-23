#include "unp.h"
#include <limits.h>

int main(int argc, char **argv)
{
    int listenfd, connfd;
    pid_t childpid;
    socklen_t clilen;
    struct sockaddr_in cliaddr, servaddr;
    puts("tcpserv04");
//    puts("run now......");
    listenfd = Socket(AF_INET, SOCK_STREAM, 0);
    servaddr.sin_family = AF_INET;
    servaddr.sin_port = htons(SERV_PORT);
    servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
    Bind(listenfd, (SA*)&servaddr, sizeof(servaddr));

    Listen(listenfd, LISTENQ);
    Signal(SIGCHLD, sig_chld);

    for (;;){
        clilen = sizeof(cliaddr);
        if ( (connfd = accept(listenfd, (SA*)&cliaddr, &clilen)) < 0){
            if (errno == EINTR)
                continue;
            else
                err_sys("accept error");
        }
        puts("now....");
        if ( (childpid = Fork()) == 0){
            Close(listenfd);
            str_echo(connfd);
            exit(0);
        }
        printf("child process id: %d\n", getpid());
//        fflush(stdout);
        puts("iam.....");
        Close(connfd);
    }
    return 0;
}