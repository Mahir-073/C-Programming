#include <stdio.h>
#include <stdbool.h>

int main()
{
    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("ITEM 01: $%f \n", item1);
    printf("ITEM 01: $%.2f \n", item1); // 2 digits after the decimal point

    printf("ITEM 02: $%.2f \n", item2);
    printf("ITEM 02: $%8.2f \n", item2);

    printf("ITEM 03: $%.2f \n", item3);
    printf("ITEM 03: $%-5.2f \n", item3);

    return 0;
}