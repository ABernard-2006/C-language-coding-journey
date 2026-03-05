#include <stdio.h>
#include <string.h>

void compress(char str[], int index);

int main() {
    char word[200];

    printf("Enter word: ");
    scanf("%s", word);

    compress(word, 0);

    return 0;
}

void compress(char str[], int index) {
    if (str[index] == '\0')
        return;

    char current = str[index];
    int count = 0;
    int i = index;

    while (str[i] == current) {
        count++;
        i++;
    }

    printf("%c%d", current, count);

    compress(str, i);
}