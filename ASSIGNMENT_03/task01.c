#include <stdio.h>
#include <stdlib.h>

#define MAX_PROCESSES 10

typedef struct process {
    int pid;
    int at;
    int bt;
    int rt;
    int ct;
    int ta;
    int wt;
} Process;

int main() {
    Process p[MAX_PROCESSES];
    int num_processes, time, min_burst_time, min_burst_index;

    // taking input
    printf("Enter the number of processes: ");
    scanf("%d", &num_processes);

    for (int i = 0; i < num_processes; i++) {
        p[i].pid = i + 1;
        printf("\nEnter details for process %d:\n", p[i].pid);

        printf("Arrival time: ");
        scanf("%d", &p[i].at);

        printf("Burst time: ");
        scanf("%d", &p[i].bt);

        p[i].rt = p[i].bt;
    }

    time = 0;
    while (1) {
        min_burst_time = 100000;
        min_burst_index = -1;


        for (int i = 0; i < num_processes; i++) {
            if (p[i].at <= time && p[i].rt < min_burst_time && p[i].rt > 0) {
                min_burst_time = p[i].rt;
                min_burst_index = i;
            }
        }

        if (min_burst_index == -1) {
            // All processes have completed
            break;
        }

        // Execute process
        p[min_burst_index].rt--;
        time++;

        // Update completion time, turnaround time, and waiting time for completed process
        if (p[min_burst_index].rt == 0) {
            p[min_burst_index].ct = time;
            p[min_burst_index].ta = p[min_burst_index].ct - p[min_burst_index].at;
            p[min_burst_index].wt = p[min_burst_index].ta - p[min_burst_index].bt;
        }
    }

    printf("\nPID\tAT\tBT\tCT\tTAT\tWT\n");
    for (int i = 0; i < num_processes; i++) {
        printf("%d\t%d\t%d\t%d\t%d\t%d\n", p[i].pid, p[i].at, p[i].bt, p[i].ct, p[i].ta, p[i].wt);
    }

    float avg_ta = 0, avg_wt = 0;
    for (int i = 0; i < num_processes; i++) {
        avg_ta += p[i].ta;
        avg_wt += p[i].wt;
    }

    avg_ta =  avg_ta / num_processes;
    avg_wt = avg_wt / num_processes;
    printf("\nAverage turnaround time: %.3f\nAverage waiting time: %.3f\n", avg_ta, avg_wt);

    return 0;
}
