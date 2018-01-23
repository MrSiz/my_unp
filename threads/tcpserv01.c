#include "unpthread.h"
#include <pthread.h>
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


    for (;;){
        len = addrlen;
        connfd = Accept(listenfd, cliaddr, &len);
        Pthread_create(&tid, NULL, &doit, (void*)connfd);
    }
}

static void *doit(void *arg)
{
    Pthread_detach(pthread_self());
    str_echo((int)arg);
    Close((int)arg);
    return NULL;
}