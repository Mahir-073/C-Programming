#include <stdio.h>
#include <stdbool.h>

int main()
{
    int x = 5;
    int y = 3;
    int z = 8;
    printf("Value of X, Y, Z are: %d, %d, %d, \n", x, y, z);

    double result1 = (x * z) / y;
    double result2 = (x * z) / (float)y;

    float x1 = 5;
    float y1 = 3;
    float z1 = 8;

    double result3 = (x1 * z1) / y1;

    int sum = x + y;
    int sub = x - y;
    int mul = x * y;

    float div = x / y;
    float mod = x % y;

    x++;
    y++;

    printf("SUM: %d \n", sum);
    printf("SUB: %d \n", sub);
    printf("MUL: %d \n", mul);
    printf("DIV: %f \n", div);
    printf("MOD: %f \n", mod);
    printf("RESULT: %lf \n", result1);
    printf("RESULT: %lf \n", result2);
    printf("RESULT: %lf \n", result3);

    printf("X: %d \n", x);
    printf("Y: %d \n", y);

    return 0;
}