#include <stdio.h>
#include <stdbool.h>

int main()
{
    const float PI = 3.14159; // BY USING CONST KEYWORD THIS VARIABLE IS READ ONLY.

    printf("Value of pi: %f \n", PI);

    float circum = 2 * PI * 6;
    printf("CIRCUMFERENCE: %f", circum);

    return 0;
}