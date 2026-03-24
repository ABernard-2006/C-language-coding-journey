//Allen Bernard R. Aurellano BSCS - 1A

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORDS 1000
#define MAX_LEN 100

void toLowerCase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower((unsigned char)str[i]);
    }
}

int compare(const void *a, const void *b) {
    char *word1 = *(char **)a;
    char *word2 = *(char **)b;

    int len1 = strlen(word1);
    int len2 = strlen(word2);

    if (len1 != len2)
        return len1 - len2;
    return strcmp(word1, word2);
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s inputfile outputfile\n", argv[0]);
        return 1;
    }

    FILE *fin = fopen(argv[1], "r");
    if (!fin) {
        perror("Error opening input file");
        return 1;
    }

    FILE *fout = fopen(argv[2], "w");
    if (!fout) {
        perror("Error opening output file");
        fclose(fin);
        return 1;
    }

    char *words[MAX_WORDS];
    char buffer[MAX_LEN];
    int count = 0;

    while (fgets(buffer, sizeof(buffer), fin)) {
        buffer[strcspn(buffer, "\n")] = '\0';

        toLowerCase(buffer);

        words[count] = (char *)malloc(strlen(buffer) + 1);
        strcpy(words[count], buffer);

        count++;
    }

    fclose(fin);

    qsort(words, count, sizeof(char *), compare);

    printf("%-15s %-15s    %-10s\n", "WORD", "ADDRESS", "LENGTH");
    fprintf(fout, "%-15s %-15s   %-10s\n", "WORD", "ADDRESS", "LENGTH");

    printf("-------------------------------------------------\n");
    fprintf(fout, "-------------------------------------------------\n");

    for (int i = 0; i < count; i++) {
        printf("%-15s %p   %-10lu\n", words[i], (void *)words[i], strlen(words[i]));
        fprintf(fout, "%-15s %p   %-10lu\n", words[i], (void *)words[i], strlen(words[i]));
    }

    for (int i = 0; i < count; i++) {
        free(words[i]);
    }

    fclose(fout);

    return 0;
}