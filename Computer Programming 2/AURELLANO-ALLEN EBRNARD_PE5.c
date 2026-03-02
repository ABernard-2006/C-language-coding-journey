//Allen Bernard R. Aurellano BSCS - 1A

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void getPluralForm(char word[]);

int main() {
    FILE *inputFile, *outputFile;
    char word[100];
    char original[100];
    int i;

    inputFile = fopen("singular.in", "r");
    if (inputFile == NULL) {
        printf("Error opening input file.\n");
        return 1;
    }

    outputFile = fopen("plural.out", "w");
    if (outputFile == NULL) {
        printf("Error opening output file.\n");
        return 1;
    }

    printf("SINGULAR      PLURAL\n");
    printf("----------------------\n");

    fprintf(outputFile, "SINGULAR      PLURAL\n");
    fprintf(outputFile, "----------------------\n");

    while (fscanf(inputFile, "%s", word) != EOF) {

        for (i = 0; word[i] != '\0'; i++) {
            word[i] = tolower(word[i]);
        }

        strcpy(original, word);

        getPluralForm(word);

        printf("%-13s %s\n", original, word);
        fprintf(outputFile, "%-13s %s\n", original, word);
    }

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}

void getPluralForm(char word[]) {
    int len = strlen(word);

    if ((len >= 2 && strcmp(&word[len - 2], "sh") == 0) ||
        (len >= 2 && strcmp(&word[len - 2], "ch") == 0) ||
        word[len - 1] == 's' ||
        word[len - 1] == 'x' ||
        word[len - 1] == 'z') {
        strcat(word, "es");
    }

    else if (word[len - 1] == 'y') {
        char beforeY = word[len - 2];

        if (!(beforeY == 'a' || beforeY == 'e' || 
            beforeY == 'i' || beforeY == 'o' || 
            beforeY == 'u')) {

            word[len - 1] = '\0';   
            strcat(word, "ies");
        }
        else {
            strcat(word, "s");
        }
    }

    else {
        strcat(word, "s");
    }
}