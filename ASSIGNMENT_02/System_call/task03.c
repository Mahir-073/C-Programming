#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    int a, b, c;
    int process_count = 1; 

    a = fork();
    b = fork();
    c = fork();

    if (a == 0) {
        
        if (getpid() % 2 != 0) {
            fork();
            process_count++;
        }
    } else if (b == 0) {
        
        if (getpid() % 2 != 0) {
            fork();
            process_count++;
        }
    } else if (c == 0) {
        
        if (getpid() % 2 != 0) {
            fork();
            process_count++;
        }
    } else {
        
        process_count += 3; 

        printf("Total number of processes created: %d\n", process_count);
    }

    return 0;
}
