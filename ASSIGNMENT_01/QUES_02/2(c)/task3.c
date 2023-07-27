#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPasswordValid(const char* password) {
    bool hasLowercase = false;
    bool hasUppercase = false;
    bool hasDigit = false;
    bool hasSpecialChar = false;

    for (int i = 0; i < strlen(password); i++) {
        char ch = password[i];

        if (islower(ch))
            hasLowercase = true;
        else if (isupper(ch))
            hasUppercase = true;
        else if (isdigit(ch))
            hasDigit = true;
        else if (ch == '_' || ch == ',' || ch == '$' || ch == '#' || ch == '@')
            hasSpecialChar = true;
    }

    if (!hasLowercase)
        printf("Lowercase character missing\n");
    if (!hasUppercase)
        printf("Uppercase character missing\n");
    if (!hasDigit)
        printf("Digit missing\n");
    if (!hasSpecialChar)
        printf("Special character missing\n");

    return hasLowercase && hasUppercase && hasDigit && hasSpecialChar;
}

int main() {
    char password[100];

    printf("Enter a password: ");
    scanf("%s", password);

    if (isPasswordValid(password))
        printf("OK\n");

    return 0;
}

