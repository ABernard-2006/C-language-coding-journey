// EXERCISE 3 - Recursive Vowel Counter

#include <stdio.h>
#include <ctype.h>

int countVowels(char str[], int index);

int main() {
    char word[100];

    printf("Enter word: ");
    scanf("%s", word);

    printf("Vowels: %d\n", countVowels(word, 0));

    return 0;
}

int countVowels(char str[], int index) {
    if (str[index] == '\0')
        return 0;

    char ch = tolower(str[index]);
    int isVowel = (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');

    return isVowel + countVowels(str, index + 1);
}