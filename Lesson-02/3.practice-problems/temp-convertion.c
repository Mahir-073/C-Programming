#include <stdio.h>
#include <ctype.h>

int main()
{

    char unit;
    float temp;

    printf("\nChoose temparature unit either 'C' or 'F': ");
    scanf("%c", &unit);

    unit = toupper(unit);

    if (unit == 'C')
    {
        printf("\nEnter the celcius value: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("\nThe farenheit value: %.2f", temp);
    }
    else if (unit == 'F')
    {
        printf("\nEnter the farenheit value: ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("\nThe celcius value: %.2f", temp);
    }
    else
    {
        printf("\n %c is not a valid unit of measurement", unit);
    }

    return 0;
}