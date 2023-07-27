#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>


int main() {
    pid_t pid, child_pid;
    int i;

    pid = getpid(); 
    printf("1. Parent process ID: %d\n", pid);

    
    child_pid = fork();

    if (child_pid == 0) { 
        pid = getpid(); 
        printf("2. Child process ID: %d\n", pid);

        // Create three grandchild processes using a loop
        for (i = 0; i < 3; i++) {
            pid_t grandchild_pid = fork();

            if (grandchild_pid == 0) { 
                pid = getpid(); 
                printf("%d. Grandchild process ID: %d\n", 3 + i, pid);
                return 0;
            }
               
        }
        return 0;
         
    }
    return 0;
}

