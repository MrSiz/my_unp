#include <sys/types.h>
#include <sys/socket.h>
#include <sys/time.h>
#include <time.h>
#include <netinet/in.h>
#include <errno.h>
#include <arpa/inet.h>
#include <fcntl.h>
#include <netdb.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/un.h>
#include <poll.h>
#include <error.h>
#include <sys/ioctl.h>

#define prln(x) puts(#x)


int main(int argc, char **argv)
{
    int sockfd, listenfd;

    listenfd = socket(AF_INET, SOCK_STREAM, 0);
    if (listenfd <= 0){
        perror("error for socket");
    }
    struct sockaddr_in servaddr;
    servaddr.sin_port = htons(8080);
    servaddr.sin_family = AF_INET;
    // puts(hhj);
    inet_pton(AF_INET, argv[1], &servaddr.sin_addr);

    bind(listenfd, (struct sockaddr*)&servaddr, sizeof(servaddr));
    char buf[10000] = {
            "HTTP/1.1 200 OK\r\n""Date: Sat, 31 Dec 2005 23:59:59 GMT\r\n""Content-Type: text/html;charset=utf-8\r\n"
                    "Content-Length: 122\r\n"
                    "\r\n"
                    "<html>\r\n"
                    "<head>\r\n"
                    "<title>Wrox Homepage</title>\r\n"
                    "</head>\r\n"
                    "<body>hello world</body>\r\n"
                    "</html>\r\n"
    };
    listen(listenfd, 1);
    for (; ;){
        puts("I'm listening");
        int connfd = accept(listenfd, NULL, NULL);
        if (connfd < 0) {
            perror("accept error");
        }
        puts("someone connect");
        int len = write(connfd, buf, strlen(buf));
        if (len >= 0){
            puts("write something");
        }
    }
    return 0;
}