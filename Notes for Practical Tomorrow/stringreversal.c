// EXERCISE 1 - Recursive String Reversal

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseString(char str[], int start, int end);

int main() {
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");

    char word[100], original[100];
    int i;

    if (!in || !out) {
        printf("File error.\n");
        return 1;
    }

    printf("ORIGINAL     REVERSED\n");
    printf("----------------------\n");

    fprintf(out, "ORIGINAL     REVERSED\n");
    fprintf(out, "----------------------\n");

    while (fscanf(in, "%s", word) != EOF) {

        for (i = 0; word[i]; i++)
            word[i] = tolower(word[i]);

        strcpy(original, word);

        reverseString(word, 0, strlen(word) - 1);

        printf("%-12s %s\n", original, word);
        fprintf(out, "%-12s %s\n", original, word);
    }

    fclose(in);
    fclose(out);
    return 0;
}

void reverseString(char str[], int start, int end) {
    if (start >= end)
        return;

    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    reverseString(str, start + 1, end - 1);
}