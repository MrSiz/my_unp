#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


void* func(void * ptr)
{
    printf("thread is running..");
    while (1){
        printf("..");
    }
    return NULL;
}


int main()
{
    pthread_t p;
    pthread_create(&p, NULL, func, NULL);
    printf("p_thread_id : %lu", p);
    pthread_detach(p);
    sleep(1);
    puts("end main");
    return 0;
}