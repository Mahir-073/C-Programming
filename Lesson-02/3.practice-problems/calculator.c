#include <stdio.h>

int main()
{

    char operator;
    double val1;
    double val2;
    double result;

    printf("\n Choose a operator (+, -, *, /, %): ");
    scanf("%c", &operator);

    printf("\n Enter first value: ");
    scanf("%lf", &val1);

    printf("\n Enter second value: ");
    scanf("%lf", &val2);

    switch (operator)
    {
    case '+':
        result = val1 + val2;
        printf("\n Addition: %.2lf", result);
        break;

    case '-':
        result = val1 - val2;
        printf("\n Subtraction: %.2lf", result);
        break;

    case '*':
        result = val1 * val2;
        printf("\n Multiplication: %.2lf", result);
        break;

    case '/':
        result = val1 / val2;
        printf("\n Division: %.2lf", result);
        break;

    case '%':
        result = (int)val1 % (int)val2;
        printf("\n Modulus: %.2lf", result);
        break;

    default:
        printf("Choose a valid operator");
    }

    return 0;
}