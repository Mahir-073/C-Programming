#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    FILE *fp;
    char filename[100], str[100];

    
    if (argc < 2) {
        printf("Please provide a filename as command line argument.\n");
        exit(1);
    }

    
    strcpy(filename, argv[1]);

    
    fp = fopen(filename, "w");

    
    if (fp == NULL) {
        printf("Unable to open file %s.\n", filename);
        exit(1);
    }

    
    printf("Enter a string to write to file (enter '-1' to quit):\n");
    scanf("%s", str);

    while (strcmp(str, "-1") != 0) {
        
        fprintf(fp, "%s\n", str);

        printf("Enter another string (enter '-1' to quit):\n");
        scanf("%s", str);
    }

   
    fclose(fp);

    printf("File %s has been written.\n", filename);

    return 0;
}


