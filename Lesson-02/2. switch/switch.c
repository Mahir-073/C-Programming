#include <stdio.h>

int main()
{
    char grade;

    printf("Enter your grade: ");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
        printf("Excellent \n");
        break;
    case 'B':
        printf("Well Done \n");
        break;

    case 'C':
        printf("Keep improving \n");
        break;

    case 'D':
        printf("Average result \n");
        break;

    case 'E':
        printf("Work Hard \n");
        break;

    case 'F':
        printf("Failed !!!! \n");
        break;

    default:
        printf("Not a valid grade");
    }

    return 0;
}