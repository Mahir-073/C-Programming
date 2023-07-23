#include <stdio.h>
#include <string.h>

int main()
{
    char name[25];
    printf("\n Enter your name: ");
    fgets(name, 25, stdin);

    name[strlen(name) - 1] = '\0';

    while (strlen(name) == 0)
    {
        printf("\n No name found yet!!!!");
        printf("\n Enter your name: ");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';
    }

    printf("Name: %s", name);
    return 0;
}