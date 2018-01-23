```
#include "unp.h"

int main(int argc, char **argv)
{
    int listenfd, connfd;

    struct sockaddr_in servaddr;
    char buff[MAXLINE];
    time_t ticks;

    listenfd = Socket(AF_INET, SOCK_STREAM, 0);
    fprintf(stdout, "sdf");
    fflush(stdout);
    bzero(&servaddr, sizeof(servaddr));

    servaddr.sin_family = AF_INET;
//    servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
    inet_pton(AF_INET, "127.0.0.1", &servaddr.sin_addr);
    servaddr.sin_port = htons(11111);
//    fprintf(stdout, "%d", listenfd);

    Bind(listenfd, (SA*)&servaddr, sizeof(servaddr));

    Listen(listenfd, LISTENQ);

    for (;;){
        connfd = Accept(listenfd, (SA*)NULL, NULL);

        ticks = time(NULL);
        snprintf(buff, sizeof(buff), "%.24s\r\n", ctime(&ticks));

        Write(connfd, buff, strlen(buff));

        Close(connfd);
    }
}
```

使用**fprintf**输出到**stout**时，在没有使用**fflush**时，发现不会立即输出到控制台，需要刷新缓冲区。
