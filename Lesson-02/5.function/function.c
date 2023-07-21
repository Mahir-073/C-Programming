#include <stdio.h>

void birthday()
{
    printf("\nHappy Birthday");
}

void bDay(char n[], float age)
{
    printf("\nHappy Birthday %s !!!!", n);
    printf("\nYou are now %.2f years old", age);
}

double square(double x)
{
    double result = x * x;
    return result;
}

int findMax(int x, int y, int z)
{
    return (x > y) ? x : (y > z) ? y: z; // ternary
}

int main()
{

    char name[] = "Mahir";
    float age = 23.5;

    birthday();
    bDay(name, age);

    double result = square(5.25);

    printf("\nSquare calculation by a function: %.3lf", result);

    int max = findMax(4, 7, 9);

    printf("\nMaximum value: %d", max);

    return 0;
}