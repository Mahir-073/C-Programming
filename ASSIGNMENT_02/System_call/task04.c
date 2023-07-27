#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int compare(const void * a, const void * b) {
    return (*(int*)b - *(int*)a);
}

int main(int argc, char *argv[]) {
    int arr[argc-1];
    for(int i=0; i<argc-1; i++) {
        arr[i] = atoi(argv[i+1]);
    }
    int n = argc-1;

    pid_t pid = fork();

    if(pid == 0) {       
        qsort(arr, n, sizeof(int), compare);
        printf("Sorted array in descending order: ");
        for(int i=0; i<n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        
        wait(NULL);
        printf("Odd/Even status of the numbers: ");
        for(int i=0; i<n; i++) {
            int num = arr[i];
            if(num % 2 == 0) {
                printf("Even ");
            } else {
                printf("Odd ");
            }
        }
        printf("\n");
    }

    return 0;
}

