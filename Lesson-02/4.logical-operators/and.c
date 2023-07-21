#include <stdio.h>
#include <stdbool.h>

int main()
{
    float age;
    bool male = true;

    printf("\nEnter your age: ");
    scanf("%f", &age);

    if (age >= 18 && age <= 60 && male == true)
    {
        printf("Allowed to sign up");
    }
    else
    {
        printf("Not allowed!!!!!");
    }

    return 0;
}