#include <stdio.h>

int main()
{
    for (int i = 0; i < 20; i++)
    {
        if (i == 13)
        {
            continue; // continue skips the rest of code and focuses on the next iteration
        }
        else if (i == 17)
        {
            break;
        }
        printf("\n Index: %d", i);
    }

    return 0;
}
