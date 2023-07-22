#include <stdio.h>

void type1(int n)
{
    printf("TYPE-01: \n\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void type2(int n)
{
    printf("\nTYPE-02: \n\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void type3(int n)
{
    printf("\nTYPE-03: \n\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}

void type4(int n)
{
    printf("\nTYPE-04: \n\n");
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n - 1 - i; k++)
        {
            printf(" ");
        }

        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void type5(int n)
{
    printf("\nType-05: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void type6(int n)
{
    printf("\nType-06: \n");
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void type7(int n)
{

    printf("\nType-07: \n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    type1(5);
    type2(5);
    type3(5);
    type4(5);
    type5(5);
    type6(5);
    type7(5);
    return 0;
}

/*

TYPE-01: 

*****
*****
*****
*****
*****

TYPE-02:

*
**
***
****
*****

TYPE-03:

*****
****
***
**
*

TYPE-04:

    *
   **
  ***
 ****
*****

Type-05:
    *
   ***
  *****
 *******
*********

Type-06:
*********
 *******
  *****
   ***
    *

Type-07:
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/