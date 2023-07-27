#include <stdio.h>

struct Range {
    int start;
    int end;
};

int checkPerfect(int num) {
   int i, sum = 0;

    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum == num) {
        return 1;
    } else {
        return 0;
    }
}

void printPerfectNumbers(struct Range r) {
    printf("Perfect numbers between %d and %d are: ", r.start, r.end);

    for (int i = r.start; i <= r.end; i++) {
        if (checkPerfect(i)) {
            printf("\n%d", i);
        }
    }
}

int main() {
    struct Range range;

    printf("Enter the starting number: ");
    scanf("%d", &range.start);

    printf("Enter the ending number: ");
    scanf("%d", &range.end);

    printPerfectNumbers(range);

    return 0;
}
