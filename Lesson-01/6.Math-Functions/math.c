#include <stdio.h>
#include <math.h>

int main()
{

    double a = sqrt(25);
    printf("Square-root: %lf \n", a);

    double b = pow(2, 3);
    printf("Power: %lf \n", b);

    int c1 = round(3.17);
    int c2 = round(3.77);
    printf("Round of 3.17 (<0.5): %d \n", c1);
    printf("Round of 3.77 (>0.5): %d \n", c2);

    int d = ceil(3.1416);
    printf("Ceil: %d \n", d);

    int e = floor(3.99);
    printf("Floor: %d \n", e);

    double f = fabs(-73);
    printf("Absolute value: %lf \n", f);

    double g = log(3);
    printf("Log value: %lf \n", g);

    double h = sin(45);
    printf("sin value: %lf \n", h);

    double i = cos(45);
    printf("cos value: %lf \n", i);

    double j = tan(45);
    printf("tan value: %lf \n", j);

    return 0;
}