#include "unpthread.h"

static void *doit(void *);

int main(int argc, char **argv)
{
    int listenfd, connfd;
    pthread_t tid;
    socklen_t addrlen, len;
    struct sockaddr *cliaddr;


    if (argc == 2){
        listenfd = Tcp_listen(NULL, argv[1], NULL);
    }else if (argc == 3){
        listenfd = Tcp_listen(argv[1], argv[2], NULL);
    }else {
        err_quit("usage: tcprecv01 [host>] <port>");
    }

    int *iptr;
    for (;;){
        len = addrlen;
        iptr = Malloc(sizeof(int));
        *iptr = Accept(listenfd, cliaddr, &len);
        Pthread_create(&tid, NULL, &doit, iptr);
    }
}

static void *doit(void *arg)
{
    int connfd;
    connfd = *((int *)arg);
    free(arg);

    Pthread_detach(pthread_self());
    str_echo(connfd);
    Close(connfd);
    return NULL;
}