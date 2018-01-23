//link lib func
//gcc -o out_test_tcp_connect test_tcp_connect.c -L ../lib -lfunc
#include <stdio.h>

int Tcp_connect(const char *, const char *);

int main(int argc, char **argv)
{
    Tcp_connect(argv[1], argv[2]);

    puts("suc");

    return 0;
}
