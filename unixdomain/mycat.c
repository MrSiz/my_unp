#include "unp.h"

int my_open(const char *, int);

int main(int argc, char **argv)
{
    int fd, n;
    char buff[BUFFSIZE];

    if (argc != 2){
        err_quit("usage: a.out <path>");
    }

    if ( (fd = my_open(argv[1], O_RDONLY)) < 0){
        err_sys("cannot open");
    }

    while ( (n = Read(fd, buff, BUFFSIZE)) > 0){
        Write(STDOUT_FILENO, buff, n);
    }
    exit(0);
}