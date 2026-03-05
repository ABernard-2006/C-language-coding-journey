// EXERCISE 2 - Recursive Palindrome Checker

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char str[], int start, int end);

int main() {
    char word[100];
    int i;

    printf("Enter words (type stop to end):\n");

    while (1) {
        scanf("%s", word);

        if (strcmp(word, "stop") == 0)
            break;

        for (i = 0; word[i]; i++)
            word[i] = tolower(word[i]);

        if (isPalindrome(word, 0, strlen(word) - 1))
            printf("%s is PALINDROME\n", word);
        else
            printf("%s is NOT PALINDROME\n", word);
    }

    return 0;
}

int isPalindrome(char str[], int start, int end) {
    if (start >= end)
        return 1;

    if (str[start] != str[end])
        return 0;

    return isPalindrome(str, start + 1, end - 1);
}