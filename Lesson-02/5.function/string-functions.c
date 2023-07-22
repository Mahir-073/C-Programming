#include <stdio.h>
#include <string.h>

int main()
{

    char str1[] = "Mahir";
    char str2[] = "Ahmed";
    char str3[] = "Niloy";

    // strlwr(str1);   // converts a string to lowercase
    // strupr(str1);  // converts a string to uppercase
    // strcat(str1,str2); // appends string2 to end of string1
    //  strncat(str1,str2,1);  //appends n characters from str2 to str 1
    // strcpy(str1,str2);  // copy str2 to str1
    // strncpy(str1,str2,1);  //copy n characters

    strset(str1, '?');     // set all characters of a string as a given character
    strnset(str2, 'x', 1); // n num of char
    strrev(str3);          // reverse a string

    printf("\n %s", str1);
    printf("\n %s", str2);
    printf("\n %s", str3);

    int len_res1 = strlen(str1);
    printf("\nLength: %d", len_res1);

    int len_res2 = strcmp(str1, str2);
    if (len_res2 == 0)
    {
        printf("\nSame strings");
    }
    else
        printf("\nDifferent strings");

    return 0;
}