#include "unp.h"

int udp_connect(const char *host, const char *serv)
{
    int sockfd, n;
    struct addrinfo hints, *res, *ressave;

    bzero(&hints, sizeof(hints));
    hints.ai_family = AF_UNSPEC;
    hints.ai_socktype = SOCK_DGRAM;

    if ( (n = getaddrinfo(host, serv, &hints, &res)) != 0){
        err_quit("udp_connect error");
    }
    ressave = res;

    do {
       sockfd = socket(res->ai_family, res->ai_socktype, res->ai_protocol);

        if (sockfd < 0)
            continue;
        if (connect(sockfd, res->ai_addr, res->ai_addrlen) == 0)
            break;
        Close(sockfd);
    }while ( (res = res->ai_next) != NULL);

    if (res == NULL)
        err_sys("udp_connect error");

    freeaddrinfo(ressave);

    return sockfd;
}

int Udp_connect(const char *host, const char *serv)
{
    return udp_connect(host, serv);
}