#include <stdio.h>
#include <string.h>

int main()
{
    int num = 0;
    int sum = 0;

    do
    {
        printf("Enter a number more than 0: ");
        scanf("%d", &num);
        if (num > 0)
        {
            sum += num;
        }
    } while (num > 0);

    printf("sum: %d", sum);
    return 0;
}