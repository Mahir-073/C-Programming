#include <pthread.h>
#include <stdio.h>
#include <string.h>
#define MAX 10
#define BUFLEN 6
#define NUMTHREAD 2

void *consumer(int *id);
void *producer(int *id);
char buffer[BUFLEN];
char source[BUFLEN];
int pCount = 0;
int cCount = 0;
int buflen;

pthread_mutex_t count_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t nonEmpty = PTHREAD_COND_INITIALIZER;
pthread_cond_t full = PTHREAD_COND_INITIALIZER;
int thread_id[NUMTHREAD] = {0,1};
int i = 0;
int j = 0;

int main()
{
    int i;
    pthread_t thread[NUMTHREAD];

    strcpy(source, "abcdef");
    buflen = strlen(source);

    
    pthread_create(&thread[0], NULL, producer, &thread_id[0]);
    pthread_create(&thread[1], NULL, consumer, &thread_id[1]);

    
    pthread_join(thread[0], NULL);
    pthread_join(thread[1], NULL);

    return 0;
}

void *producer(int *id)
{
    int pIndex = 0;
    while (pCount < MAX)
    {
        pthread_mutex_lock(&count_mutex);

        while (j == 1) 
        {
            pthread_cond_wait(&full, &count_mutex);
        }

        buffer[pIndex] = source[pCount % buflen];
        printf("%d produced %c by Thread %d\n", pCount, buffer[pIndex], *id);

        pCount++;
        pIndex = (pIndex + 1) % BUFLEN;
        j = 1;

        pthread_cond_signal(&nonEmpty); 
        pthread_mutex_unlock(&count_mutex);

        
        usleep(100000); 
    }

    return NULL;
}

void *consumer(int *id)
{
    int cIndex = 0;
    while (cCount < MAX)
    {
        pthread_mutex_lock(&count_mutex);

        while (j == 0) 
        {
            pthread_cond_wait(&nonEmpty, &count_mutex);
        }

        printf("%d consumed %c by Thread %d\n", cCount, buffer[cIndex], *id);

        cCount++;
        cIndex = (cIndex + 1) % BUFLEN;
        j = 0;

        pthread_cond_signal(&full); 
        pthread_mutex_unlock(&count_mutex);

        
        usleep(150000); 
    }

    return NULL;
}

