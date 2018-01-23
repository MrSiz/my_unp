#include "unp.h"

void str_cli(FILE *fp, int sockfd)
{
    pid_t pid;

    char sendline[MAXLINE], recvline[MAXLINE];

    if ( (pid = Fork()) == 0){
        while (Readline(sockfd, recvline, MAXLINE) > 0){
            Fputs(recvline, stdout);
        }
        kill(getppid(), STGTERM);
        exit(0);
    }
    while (Fgets(sendline, MAXLINE, fp) != NULL){
        Writen(sockfd, sendline, strlen(sendline));
    }
    Shutdown(sockfd, SHUT_WR);
    pause();
    return ;
}