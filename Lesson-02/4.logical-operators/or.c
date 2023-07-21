#include <stdio.h>

int main()
{
    float age;

    printf("\nEnter your age: ");
    scanf("%f", &age);

    if (age < 18 || age > 60)
    {
        printf("Invalid age");
    }
    else
    {
        printf("Allowed to sign-up");
    }

    return 0;
}