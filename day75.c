#include <stdio.h>

int main() {
    char filename[100];
    char text[1000];

    printf("Enter filename: ");
    scanf("%s", filename);
    getchar(); // to consume the newline left by scanf

    FILE *fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    fprintf(fp, "%s", text);

    fclose(fp);

    printf("Text appended successfully.\n");
    return 0;
}