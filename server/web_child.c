#include "unp.h"

#define MAXN 16384

void web_child(int sockfd)
{
    int ntowrite;
    ssize_t nread;

    char line[MAXLINE], result[MAXN];

    for (; ;){
        if ( (nread = Readline(sockfd, line, MAXLINE)) == 0){
            return ;
        }

        ntowrite = atol(line);

        if ((ntowrite <= 0)){
            err_quit("client request for %d bytes", ntowrite);
        }
        Writehn(sockfd, result, ntowrite);
    }
}