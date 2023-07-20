#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a = 5;
    int b = 3;
    int c = 8;
    int d = 9;
    int e = 11;

    a += 2;
    c *= 3;
    e %= 2;

    printf("a: %d \n", a);
    printf("b: %d \n", b -= 1);
    printf("c: %d \n", c);
    printf("d: %d \n", d /= 3);
    printf("e: %d \n", e);

    return 0;
}