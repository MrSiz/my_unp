#include "unp.h"

static int nchildren;
static pid_t *pids;

int  main(int argc, char **argv)
{
    int listenfd, i;
    socklen_t addrlen;
    void sig_int(int);
    pid_t child_make(int, int, int);

    if (argc == 2){
        listenfd = Tcp_listen(NULL, argv[1], &addrlen);
    }else if (argc == 3){
        listenfd = Tcp_listen(argv[1], argv[2], &addrlen);
    }else {
        err_quit("usage: tcprecv01 [host>] <port> <#children>");
    }

    nchildren = aoti(argv[argc - 1]);
    pids = Calloc(nchildren, sizoef(pid_t));


    my_lock_init("/tmp/lock.XXXXXX");
    for (i = 0; i < nchildren; ++i){
        pids[i] = child_make(i, listenfd, addrlen);
    }
    Signal(SIGINT, sig_int);

    for (; ;){
        pause();
    }
}

void sig_int(int signo)
{
    int i;
    void pr_cpu_time(void);

    for (i = 0; i < nchildren; ++i){
        kill(pids[i], SIGTERM);
    }

    while (wait(NULL) > 0) ;

    if (errno != ECHILD){
        err_sys("wait error");
    }

    pr_cpu_time();
    exit(0);
}