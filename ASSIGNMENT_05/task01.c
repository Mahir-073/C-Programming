#include <stdio.h>
#include <stdbool.h>

#define n 5 
#define m 4 

int alloc[n][m] = { { 0, 1, 0, 3 },
                    { 2, 0, 0, 0 },
                    { 3, 0, 2, 0 },
                    { 2, 1, 1, 5 },
                    { 0, 0, 2, 2 } };

int max[n][m] = { { 6, 4, 3, 4 },
                  { 3, 2, 2, 1 },
                  { 9, 1, 2, 6 },
                  { 2, 2, 2, 8 },
                  { 4, 3, 3, 7 } };

int avail[m] = { 3, 3, 2, 1 };

bool isSafeState(int need[n][m], int work[m], bool finish[n]) {
    bool safe = true;
    int work_copy[m];
    for (int i = 0; i < m; i++) {
        work_copy[i] = work[i];
    }

    for (int i = 0; i < n; i++) {
        if (!finish[i]) {
            bool canAllocate = true;
            for (int j = 0; j < m; j++) {
                if (need[i][j] > work_copy[j]) {
                    canAllocate = false;
                    break;
                }
            }

            if (canAllocate) {
                for (int j = 0; j < m; j++) {
                    work_copy[j] += alloc[i][j];
                }
                finish[i] = true;
            } else {
                safe = false;
            }
        }
    }

    return safe;
}

int main() {
    int need[n][m];
    bool finish[n];
    int work[m];

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            need[i][j] = max[i][j] - alloc[i][j];
        }
        finish[i] = false;
    }

    
    for (int i = 0; i < m; i++) {
        work[i] = avail[i];
    }

    if (isSafeState(need, work, finish)) {
        printf("Safe here\n");
    } else {
        printf("Deadlock Ahead\n");
    }

    return 0;
}

