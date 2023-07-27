#include <stdio.h>
#include <pthread.h>

#define NUM_THREADS 5

void* thread_func(void* arg) {
    int thread_num = *((int*) arg);
    printf("thread-%d running\n", thread_num);
    printf("thread-%d closed\n", thread_num);
    
}

int main() {
    pthread_t threads[NUM_THREADS];
    int thread_nums[NUM_THREADS];

    for (int i = 0; i < NUM_THREADS; i++) {
        thread_nums[i] = i + 1;
        pthread_create(&threads[i], NULL, thread_func, (void*) &thread_nums[i]);
        pthread_join(threads[i], NULL);
    }

    return 0;
}
