#include <stdio.h>

// Input a single character (A–Z) and check if it’s a vowel or consonant using switch.

int main ()
{
    char let;

    printf("Enter a letter in Capital: ");
    scanf("%c", &let);

    switch(let)
    {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        printf("Vowel!");
        break;
        case 'B':
        case 'C':
        case 'D':
        case 'F':
        case 'G':
        case 'H':
        case 'J':
        case 'K':
        case 'L':
        case 'M':
        case 'N':
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
        case 'T':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
        printf("Consonant!");
        break;
        default:
        printf("Invalid!");
    }
    return 0;
}