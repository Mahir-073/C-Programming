#include <stdio.h>

int main()
{
    float age;

    printf("\nEnter your age: ");
    scanf("%f", &age);

    if (age >= 18 && age <= 40)
    {
        printf("Allowed to sign up");
    }
    else if (age < 0)
    {
        printf("wrong input");
    }

    else if (age == 17.5)
    {
        printf("Wait for couple of months");
    }
    else
    {
        printf("Not Allowed!!!");
    }

    return 0;
}