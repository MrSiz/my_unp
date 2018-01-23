#include <pthread.h>

int done = 0;
pthread_mutex_t m = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t c = PTHREAD_COND_INITIALIZER;

void thr_exit()
{
    done = 1;
    pthread_cond_signal(&c);
}

void thr_join()
{
    if (done == 0)
        pthread_cond_wait(&c);
}