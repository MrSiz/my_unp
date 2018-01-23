#include "unp.h"

void Write(int fd, void *ptr, size_t nbytes)
{
    if (write(fd, ptr, nbytes) != nbytes)
        err_quit("write error");
}

void Close(int fd)
{
    if (close(fd) == -1)
        err_quit("close error");
}

int Socket(int domain, int type, int protocol)
{
    int n = socket(domain, type, protocol);

    if (n < 0){
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