#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *inFile = fopen("input.txt", "r");
    if (inFile == NULL) {
        printf("Error opening input file!\n");
        return 1;
    }

    FILE *outFile = fopen("output.txt", "w");
    if (outFile == NULL) {
        printf("Error creating output file!\n");
        fclose(inFile);
        return 1;
    }

    char ch;
    while ((ch = fgetc(inFile)) != EOF) {
        fputc(toupper(ch), outFile);
    }

    fclose(inFile);
    fclose(outFile);

    printf("Text converted to uppercase and written to output.txt\n");
    return 0;
}