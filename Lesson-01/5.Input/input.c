#include <stdio.h>
#include <stdbool.h>

int main()
{
    float age;
    char name[30];

    printf("\nEnter your name: ");
    fgets(name, 30, stdin);

    printf("Enter your age: ");
    scanf("%f", &age);

    printf("\nMy name is %s", name);
    printf("\nAge: %.2f", age);

    return 0;
}