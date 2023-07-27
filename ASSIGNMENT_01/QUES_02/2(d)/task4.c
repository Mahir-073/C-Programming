#include <stdio.h>
#include <string.h>

int isEmailUpdated(const char* email) {
    const char* oldDomain = "@kaaj.com";
    const char* newDomain = "@sheba.xyz";

    // Check if the email contains the old domain
    if (strstr(email, oldDomain) != NULL) {
        return 0; // Email address is outdated
    }

    // Check if the email contains the new domain
    if (strstr(email, newDomain) != NULL) {
        return 1; // Email address is updated
    }

    return 0; 
}

int main() {
    char email[100];

    printf("Enter an email address: ");
    scanf("%s", email);

    if (isEmailUpdated(email)) {
        printf("Email address is okay.\n");
    } else {
        printf("Email address is outdated.\n");
    }

    return 0;
}

