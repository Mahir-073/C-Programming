#include <stdio.h>
#include <stdbool.h>

int main()
{
    float age;
    bool male = false;

    printf("\nEnter your age: ");
    scanf("%f", &age);

    if (age >= 18 && male != false)
    {
        printf("Invalid student");
    }
    else
    {
        printf("Allowed to sign-up");
    }

    return 0;
}