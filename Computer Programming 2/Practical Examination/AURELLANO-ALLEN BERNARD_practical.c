// Allen Bernard R. Aurellano 
// BSCS - 1A

#include <stdio.h>
#include <string.h>

void freqCounter(char checker[], int freq[]);

void freqCounter(char checker[], int freq[])
{
    int i;

    for(i=0; i<strlen(checker); i++)
    {
        if(checker[i]=='A' || checker[i]=='a')
        {
        freq[0] = freq[0]+1;
        checker[i] = 1;
        }
        else if(checker[i]=='E' || checker[i]=='e')
        {
        freq[1] = freq[1]+1;
        checker[i] = 2;
        }
        else if(checker[i]=='I' || checker[i]=='i')
        {
        freq[2] = freq[2]+1;
        checker[i] = 3;
        }
        else if(checker[i]=='O' || checker[i]=='o')
        {
        freq[3] = freq[3]+1;
        checker[i] = 4;
        }
        else if(checker[i]=='U' || checker[i]=='u')
        {
        freq[4] = freq[4]+1;
        checker[i] = 5;
        }
    }
    return;
}

int main()
{
    char word[100];
    int freqChecker[10] = {0};

    printf("Enter a string: ");
    scanf("%s", word);

    freqCounter(word, freqChecker);

    printf("\nVOWEL  FREQUENCY\n");
    printf("-----  ---------\n");

    printf("A/a     %d\n", freqChecker[0]);
    printf("E/e     %d\n", freqChecker[1]);
    printf("I/i     %d\n", freqChecker[2]);
    printf("O/o     %d\n", freqChecker[3]);
    printf("U/u     %d\n", freqChecker[4]);

    printf("Total vowels: %d\n\n", freqChecker[0]+freqChecker[1]+freqChecker[2]+freqChecker[3]+freqChecker[4]);

    printf("Modified String: %s", word);
    
    return 0;
}