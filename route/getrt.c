#include "unproute.h"

#define BUFLEN (sizeof(struct rt_msghdr) + 512)

#define SEQ 9999

int main(int argc, char **argv)
{
    int sockfd;
    char *buf;
    ssize_t n;
    pid_t pid;
    struct rt_msghdr *rtm;
    struct sockaddr *sa, *rti_info[RTAX_MAX];
    struct sockaddr_in *sin;

    if (argc != 2){
        err_quit("usage: getrt <ip>");
    }

    sockfd = Socket(AF_ROUTE, SOCK_RAW, 0);
    buf = Calloc(1, BUFLEN);

    rtm = (struct rt_msghdr *)buf;
    rtm->rtm_msglen = sizeof(struct rt_msghdr) + sizeof(struct sockaddr_in);

    rtm->rtm_version = RTM_VERSION;
    rtm->rtm_type = RTM_GET;
    rtm->rtm_addrs = RTA_DST;
    rtm->rtm_pid = pid = getpid();
    rtm->rtm_seq = SEQ;

    sin = (struct sockaddr_in *) (rtm + 1);
    sin->sin_len = sizeof(struct sockaddr_in);
    sin->sin_family = AF_INET;
    Inet_pton(AF_INET, argv[1], &sin->sin_addr);

    Write(sockfd, rtm, rtm->rtm_msglen);

    do {
        n = Read(sockfd, rtm, BUFLEN);
    }while (rtm->rtm_type != RTM_GET || rtm->rtm_seq != SEQ || rtm->rtm_pid != pid);

    rtm = (struct rt_msghdr *)buf;
    sa = (struct sockaddr *)(rtm + 1);
    get_rtaddrs(rtm->rtm_addrs, sa, rti_info);

    if ( (sa = rti_info[RTAX_DST]) != NULL){
        printf("dest: %s\n", Sock_ntop_host(sa, sa->sa_len));
    }

    if ( (sa = rti_info[RTAX_GATEWAY]) != NULL){
        printf("dest: %s\n", Sock_ntop_host(sa, sa->sa_len));
    }
    if ( (sa = rti_info[RTAX_NETMASK]) != NULL){
        printf("dest: %s\n", Sock_ntop_host(sa, sa->sa_len));
    }
    if ( (sa = rti_info[RTAX_GENMASK]) != NULL){
        printf("dest: %s\n", Sock_ntop_host(sa, sa->sa_len));
    }

    exit(0);
}

