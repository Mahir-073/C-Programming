#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>


int main() {
    // create child process
    pid_t child_pid = fork();

    if (child_pid == 0) {
        // child process
        pid_t grandchild_pid = fork();

        if (grandchild_pid == 0) {
            // grandchild process
            printf("I am grandchild\n");
        } else {
            // child process
            wait(NULL);
            printf("I am child\n");
        }
    } else {
        // parent process
        wait(NULL);
        printf("I am parent\n");
    }

    return 0;
}
