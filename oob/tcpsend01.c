#include "unp.h"

int main(int argc, char **argv){
    int sockfd;

    if (argc != 3){
        err_quit("usage: a.out <host> <port>");
    }

    sockfd = Tcp_connect(argv[1], argv[2]);
    Write(sockfd, "123", 3);
    puts("wrote 3 bytes normal");
    sleep(1);

    Send(sockfd, "4", 1, MSG_OOB);
    puts("wrote 1 bytesof OOB data");
    sleep(1);

    exit(0);
}