#include <stdio.h>
#include <stdbool.h>  

#define MAX_PROCESSES 100

struct Process {
    int pid;
    int burst_time;
    int remaining_time;
};

int main() {
    int num_processes, time_quantum, current_time = 0;
    struct Process processes[MAX_PROCESSES];
    int is_completed[MAX_PROCESSES] = {0};
    int completion_time[MAX_PROCESSES] = {0};
    int turnaround_time[MAX_PROCESSES] = {0};
    int waiting_time[MAX_PROCESSES] = {0};

    printf("Enter the number of processes: ");
    scanf("%d", &num_processes);
    printf("Enter the time quantum: ");
    scanf("%d", &time_quantum);

    printf("Enter the burst times for each process:\n");
    for (int i = 0; i < num_processes; i++) {
        printf("Process %d: ", i + 1);
        scanf("%d", &processes[i].burst_time);
        processes[i].pid = i + 1;
        processes[i].remaining_time = processes[i].burst_time;
    }

    while (true) {
        int all_processes_completed = 1;
        for (int i = 0; i < num_processes; i++) {
            if (is_completed[i] == 0) {
                all_processes_completed = 0;
                if (processes[i].remaining_time > time_quantum) {
                    processes[i].remaining_time -= time_quantum;
                    current_time += time_quantum;
                } else {
                    current_time += processes[i].remaining_time;
                    processes[i].remaining_time = 0;
                    is_completed[i] = 1;
                    completion_time[i] = current_time;
                    turnaround_time[i] = completion_time[i];
                    waiting_time[i] = turnaround_time[i] - processes[i].burst_time;
                }
            }
        }
        if (all_processes_completed) {
            break;
        }
    }

    printf("\n");
    printf("Process\tBT\tCT\tTAT\tWT\n");
    for (int i = 0; i < num_processes; i++) {
        printf("%d\t%d\t%d\t%d\t%d\n", processes[i].pid, processes[i].burst_time, completion_time[i], turnaround_time[i], waiting_time[i]);
    }

    return 0;
}

