#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;

    printf("\nENTER THE VALUE OF a: ");
    scanf("%lf", &a);

    printf("\nENTER THE VALUE OF b: ");
    scanf("%lf", &b);

    c = sqrt(a * a + b * b);

    printf("The value of Hypotenuse (c) is: %lf", c);

    return 0;
}