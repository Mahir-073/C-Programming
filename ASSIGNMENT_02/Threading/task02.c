#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *thread_function(void *arg)
{
    int *id = (int *)arg;
    for (int i = 0; i < 5; i++)
    {
        switch (*id)
        {
            case 1:
                printf("Thread %d prints %d\n", *id, i + 1);
                break;
            case 2:
                printf("Thread %d prints %d\n", *id, i + 6);
                break;
            case 3:
                printf("Thread %d prints %d\n", *id, i + 11);
                break;
            case 4:
                printf("Thread %d prints %d\n", *id, i + 16);
                break;
            case 5:
                printf("Thread %d prints %d\n", *id, i + 21);
                break;
            default:
                printf("Invalid thread ID: %d\n", *id);
                break;
        }
    }
    pthread_exit(NULL);
}

int main()
{
    pthread_t thread_id[5];
    int i;
    int *id;
    for (i = 0; i < 5; i++)
    {
        id = (int *)malloc(sizeof(int));
        *id = i + 1;
        pthread_create(&thread_id[i], NULL, thread_function, id);
        pthread_join(thread_id[i], NULL);
    }
    return 0;
}
