#include "unp.h"

int Socket(int domain, int type, int protocol)
{
    int n = socket(domain, type, protocol);

    if (n < 0){
	perror("what");
        err_quit("socket error");
    }
    return n;
}

void Connect(int fd, const struct sockaddr *sa, socklen_t salen)
{
    if (connect(fd, sa, salen) < 0)
        err_quit("connect error");
}

void Listen(int fd, int backlog)
{
    if (listen(fd, backlog) < 0)
        err_quit("listen error");
}

void Bind(int fd, const struct sockaddr *sa, socklen_t salen)
{
    if (bind(fd, sa, salen) < 0)
        err_quit("bind error");
}

int Accept(int fd, struct sockaddr *sa, socklen_t *salenptr)
{
    int n = accept(fd, sa, salenptr);
    if ( n < 0)
        err_quit("accept error");
    return n;
}

void Shutdown(int fd, int how)
{
    if (shutdown(fd, how) < 0){
        err_sys("shutdown error");
    }
}

int Select(int nfds, fd_set *r, fd_set *w, fd_set *ex, struct timeval *t)
{
    int n;
    if ( (n = select(nfds, r, w, ex, t)) < 0){
        err_sys("select error");
    }
    return (n);
}

void Send(int fd, const void *ptr, size_t nbytes, int flags)
{
    if (send(fd, ptr, nbytes, flags) != (ssize_t)nbytes)
        err_sys("send error");
}

void Sendto(int fd, const void *ptr, size_t nbytes, int flags, const struct sockaddr *sa, socklen_t salen)
{
    if (sendto(fd, ptr, nbytes, flags, sa, salen) != (ssize_t)nbytes)
        err_sys("sendto error");
}

void Sendmsg(int fd, const struct msghdr *msg, int flags)
{
    unsigned int	i;
    ssize_t			nbytes;

    nbytes = 0;	/* must first figure out what return value should be */
    for (i = 0; i < msg->msg_iovlen; i++)
        nbytes += msg->msg_iov[i].iov_len;

    if (sendmsg(fd, msg, flags) != nbytes)
        err_sys("sendmsg error");
}

ssize_t Recv(int fd, void *ptr, size_t nbytes, int flags)
{
    ssize_t		n;

    if ( (n = recv(fd, ptr, nbytes, flags)) < 0)
        err_sys("recv error");
    return(n);
}

ssize_t Recvfrom(int fd, void *ptr, size_t nbytes, int flags, struct sockaddr *sa, socklen_t *salenptr)
{
    ssize_t n;
    if ( (n = recvfrom(fd, ptr, nbytes, flags, sa, salenptr)) < 0){
        err_sys("recvfrom error");
    }
    return n;
}

ssize_t Recvmsg(int fd, struct msghdr *msg, int flags)
{
    ssize_t		n;

    if ( (n = recvmsg(fd, msg, flags)) < 0)
        err_sys("recvmsg error");
    return(n);
}


void Setsockopt(int fd, int level, int optname, const void *optval, socklen_t optlen)
{
    if (setsockopt(fd, level, optname, optval, optlen) < 0){
        err_sys("setsockopt error");
    }
}

void Getsockopt(int fd, int level, int optname, void *optval, socklen_t *optlenptr)
{
    if (getsockopt(fd, level, optname, optval, optlenptr) < 0){
        err_sys("getsockopt error");
    }
}

void Getsockname(int fd, struct sockaddr *sa, socklen_t *salenptr)
{
    if (getsockname(fd, sa, salenptr) < 0)
        err_sys("getsockname error");
}

void Getpeername(int fd, struct sockaddr *sa, socklen_t *salenptr)
{
    if (getpeername(fd, sa, salenptr) < 0)
        err_sys("getpeername error");
}

void Socketpair(int family, int type, int protocol, int *fd)
{
    int	n;
    if ( (n = socketpair(family, type, protocol, fd)) < 0)
        err_sys("socketpair error");
}
