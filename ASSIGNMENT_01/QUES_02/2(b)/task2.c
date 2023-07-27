#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void removeExtraSpaces(const char* inputFileName, const char* outputFileName) {
    FILE* inputFile = fopen(inputFileName, "r");
    FILE* outputFile = fopen(outputFileName, "w");

    if (inputFile == NULL || outputFile == NULL) {
        printf("Error opening files.\n");
        return;
    }

    char line[1000];
    while (fgets(line, sizeof(line), inputFile)) {
        char* word;
        char* token = strtok(line, " ");

        while (token != NULL) {
            word = token;

            // Skip over leading spaces
            while (isspace(*word))
                word++;

            // Write word to the output file
            fprintf(outputFile, "%s ", word);

            token = strtok(NULL, " ");
        }
    }

    fclose(inputFile);
    fclose(outputFile);

    printf("Extra spaces removed and written to the output file successfully.\n");
}

int main() {
    const char* inputFileName = "input.txt";
    const char* outputFileName = "output.txt";

    removeExtraSpaces(inputFileName, outputFileName);

    return 0;
}

