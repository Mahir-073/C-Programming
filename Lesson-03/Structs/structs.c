#include<stdio.h>
#include<string.h>

struct player{
    char name[15];
    int score;
};

int main()
{
    struct player p1;
    struct player p2;

    strcpy(p1.name, "Mahir");
    p1.score = 15;

    strcpy(p2.name, "Niloy");
    p2.score = 15;

    printf("\n%s", p1.name);
    printf("\n%s", p2.name);
    

    return 0;
}
