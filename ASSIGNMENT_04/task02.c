#include <pthread.h>
#include <semaphore.h>
#include <stdio.h>

#define MaxCrops 5
#define warehouseSize 5

sem_t empty;
sem_t full;
int in = 0;
int out = 0;
char crops[warehouseSize] = {'R', 'W', 'P', 'S', 'M'};
char warehouse[warehouseSize] = {'N', 'N', 'N', 'N', 'N'};
pthread_mutex_t mutex;

void *Farmer(void *farmer_id) {
    int farmerId = *((int *)farmer_id);

    while (1) {
        
        int cropIndex = farmerId - 1;
        
        sem_wait(&empty); // Wait if warehouse is full
        pthread_mutex_lock(&mutex);

        warehouse[in] = crops[cropIndex];
        printf("Farmer%d: Insert crops %c at %d\n", farmerId, crops[cropIndex], in);

        in = (in + 1) % warehouseSize;

        
        for (int i = 0; i < warehouseSize; i++) {
            printf("%c", warehouse[i]);
        }
        printf("\n");

        pthread_mutex_unlock(&mutex);
        sem_post(&full); 
        
        
        usleep(100000); 
    }

    return NULL;
}

void *ShopOwner(void *owner_id) {
    int ownerId = *((int *)owner_id);

    while (1) {
        
        int cropIndex = ownerId - 1;
        
        sem_wait(&full); 
        pthread_mutex_lock(&mutex);

        printf("Shopowner%d: Remove crops %c from %d\n", ownerId, crops[cropIndex], out);

        warehouse[out] = 'N';
        out = (out + 1) % warehouseSize;

        // Print the warehouse buffer
        for (int i = 0; i < warehouseSize; i++) {
            printf("%c", warehouse[i]);
        }
        printf("\n");

        pthread_mutex_unlock(&mutex);
        sem_post(&empty); 
        
        
        usleep(150000); 
    }

    return NULL;
}

int main() {
    pthread_t Far[5], Sho[5];
    pthread_mutex_init(&mutex, NULL);
    sem_init(&empty, 0, warehouseSize);
    sem_init(&full, 0, 0);
    int a[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++) {
        pthread_create(&Far[i], NULL, Farmer, &a[i]);
        pthread_create(&Sho[i], NULL, ShopOwner, &a[i]);
    }

    // Let the threads run for a while
    sleep(5);

    // Closing or destroying mutex and semaphore
    pthread_mutex_destroy(&mutex);
    sem_destroy(&empty);
    sem_destroy(&full);

    return 0;
}

