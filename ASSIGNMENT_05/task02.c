#include <stdio.h>
#include <stdbool.h>

#define n 6 
#define m 4 

int alloc[n][m] = { { 0, 1, 0, 3 },
                    { 2, 0, 0, 3 },
                    { 3, 0, 2, 0 },
                    { 2, 1, 1, 5 },
                    { 0, 0, 2, 2 },
                    { 1, 2 , 3, 1 } };

int max[n][m] = { { 6, 4, 3, 4 },
                  { 3, 2, 2, 4 },
                  { 9, 1, 2, 6 },
                  { 2, 2, 2, 8 },
                  { 4, 3, 3, 7 },
                  { 6, 2 , 6, 5 } };

int avail[m] = { 2, 2, 2, 1 };

bool tryAllocate(int process, int need[n][m], int work[m]) {
    for (int i = 0; i < m; i++) {
        if (need[process][i] > work[i]) {
            return false;
        }
    }
    return true;
}

bool isSafeState(int need[n][m], int work[m], bool finish[n], int safeSeq[n]) {
    int safeCount = 0;
    while (safeCount < n) {
        bool found = false;
        for (int i = 0; i < n; i++) {
            if (!finish[i] && tryAllocate(i, need, work)) {
                for (int j = 0; j < m; j++) {
                    work[j] += alloc[i][j];
                }
                safeSeq[safeCount++] = i;
                finish[i] = true;
                found = true;
            }
        }
        if (!found) {
            return false; 
        }
    }
    return true;
}

int main() {
    int need[n][m];
    bool finish[n];
    int work[m];
    int safeSeq[n];

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            need[i][j] = max[i][j] - alloc[i][j];
        }
        finish[i] = false;
    }

    
    for (int i = 0; i < m; i++) {
        work[i] = avail[i];
    }

    if (isSafeState(need, work, finish, safeSeq)) {
        printf("Safe sequence: ");
        for (int i = 0; i < n; i++) {
            printf("P%d ", safeSeq[i]);
        }
        printf("\n");
    } else {
        printf("No safe sequence found.\n");
    }

    return 0;
}

