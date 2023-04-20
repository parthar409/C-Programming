#include <stdio.h>
#include <stdlib.h>

int main() {
    char string[100];
    FILE *fp;

    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);

    fp = fopen("output.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    fprintf(fp, "%s", string);
    fclose(fp);

    printf("String written to file!\n");
    return 0;
}
