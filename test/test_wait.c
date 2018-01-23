#include <sys/types.h>
#include <wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
//    wait(NULL);
//    puts("start....");
    pid_t  pid;
    if (fork() == 0){
        printf("in child process\n");
        sleep(1000);
        exit(0);
    }else {
        //puts("sleep....");
//        sleep(1000);
        pid = wait(NULL);
//        puts("")
//        fflush(stdout);
        printf("%d process end\n", pid);
    }
    return 0;
}