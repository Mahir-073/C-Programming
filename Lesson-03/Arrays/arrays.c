#include <stdio.h>
#include <string.h>

void sort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d,", arr[i]);
    }
}

int main()
{
    double prices[] = {5.0, 10.0, 15.0, 20.0, 25.0, 30};
    printf("\nValue: %.2lf", prices[2]);

    // calculating the size of the array
    int totalSize = sizeof(prices); // each element got 8 bytes
    printf("\nTotal memory needed: %d bytes", totalSize);

    int sizeOfOneElement = sizeof(prices[0]);
    printf("\nSize of each element %d bytes", sizeOfOneElement);

    int length = totalSize / sizeOfOneElement;
    printf("\nLength of the array: %d", length);

    // another way of inserting value on a array
    // double value[5];

    // value[0]=11.0;
    // value[1]=12.0;
    // value[2]=13.0;
    // value[3]=14.0;
    // value[4]=15.0;

    // printf("\n %.2lf", value[2]);

    // print the values by for loop
    printf("\nValues of array are: ");
    for (int i = 0; i < length; i++)
    {
        printf("%.2lf, ", prices[i]);
    }

    // 2d array
    int numbers[2][3] = {
        {1, 2, 3},
        {4, 5, 6}}; // row = 2; column = 3;

    int num[2][3];
    num[0][0] = 5;
    num[0][1] = 6;
    num[0][2] = 7;

    num[1][0] = 1;
    num[1][1] = 2;
    num[1][2] = 3;

    // row and column calculation
    int row = sizeof(numbers) / sizeof(numbers[0]);
    int col = sizeof(numbers[0]) / sizeof(numbers[0][0]);

    printf("\nRow: %d, Column: %d", row, col);

    // printing the value of a 2d array
    printf("\nValues of 2-D array1: ");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", numbers[i][j]);
        }
    }

    printf("\nValues of 2-D array2: ");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", num[i][j]);
        }
    }
    // string array
    printf("\nBangladesh Squad: ");
    char player[][10] = {"Tamim", "Liton", ""};

    strcpy(player[2], "Hridoy");

    // printf("/nString Array: %s" ,player[0][0]);

    for (int i = 0; i < sizeof(player) / sizeof(player[0]); i++)
    {
        printf("%s, ", player[i]);
    }

    // swapping characters:
    printf("\nSwapping characters: ");

    char x = 'A';
    char y = 'B';
    char temp;

    printf("\nOriginal value of x: %c", x);
    printf("\nOriginal value of y: %c", y);

    temp = x;
    x = y;
    y = temp;

    printf("\nSwapped value of x: %c", x);
    printf("\nSwapped value of y: %c", y);

    // swapping strings:

    printf("\nSwapping strings: ");

    char x1[15] = "Mahir";
    char y1[15] = "Ahmed";
    char temp1[30];

    printf("\nOriginal value of x: %s", x1);
    printf("\nOriginal value of y: %s", y1);

    strcpy(temp1, x1);
    strcpy(x1, y1);
    strcpy(y1, temp1);

    printf("\nSwapped value of x: %s", x1);
    printf("\nSwapped value of y: %s", y1);

    // sorting ascending
    printf("\nSorting: ");
    int arr[] = {9, 2, 4, 5, 1, 3, 6, 8, 7, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    sort(arr, size);
    printArray(arr, size);

    return 0;
}
