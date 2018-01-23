#include "unp.h"

void Close(int fd)
{
    if (close(fd) == -1)
        err_quit("close error");
}

void Write(int fd, void *ptr, size_t nbytes)
{
    if (write(fd, ptr, nbytes) != nbytes)
        err_quit("write error");
}

pid_t Fork(void)
{
    pid_t pid;
    if ( (pid = fork()) == -1)
        err_sys("fork error");
    return pid;
}

void *Malloc(size_t size)
{
    void	*ptr;
    if ( (ptr = malloc(size)) == NULL)
        err_sys("malloc error");
    return(ptr);
}

ssize_t Read(int fd, void *ptr, size_t nbytes)
{
    ssize_t n;
    if ( (n = read(fd, ptr, nbytes)) == -1){
        err_sys("read error");
    }
    return n;
}

pid_t Wait(int *iptr)
{
    pid_t pid;
    if ( (pid = wait(iptr)) == -1)
        err_sys("wait error");
    return(pid);
}

pid_t Waitpid(pid_t pid, int *iptr, int options)
{
    pid_t retpid;

    if ( (retpid = waitpid(pid, iptr, options)) == -1)
        err_sys("waitpid error");
    return(retpid);
}

int Fcntl(int fd, int cmd, int arg)
{
    int	n;

    if ( (n = fcntl(fd, cmd, arg)) == -1)
        err_sys("fcntl error");
    return(n);
}



void *Calloc(size_t n, size_t size)
{
	void	*ptr;

	if ( (ptr = calloc(n, size)) == NULL)
		err_sys("calloc error");
	return(ptr);
}

void Gettimeofday(struct timeval *tv, void *foo)
{
	if (gettimeofday(tv, foo) == -1)
		err_sys("gettimeofday error");
	return;
}


