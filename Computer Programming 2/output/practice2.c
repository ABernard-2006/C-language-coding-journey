//Name: Dominguez, Ted E.
//Bloc: BSCS 1A
//Date: February 28, 2026

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//User defined Functions
void getPluralForm(char word[]);

//For scanning and printing
int main()
{
    //Declaration of variables
    FILE *ifp;
    FILE *ofp;
    ifp = fopen("singular.in", "rt");
    ofp = fopen("plural.out", "wt");
    char word[101];

    //Displays the header
    printf("SINGULAR       PLURAL\n");
    printf("------------------------\n");

    //Prints the header to the output file
    fprintf(ofp, "SINGULAR       PLURAL\n");
    fprintf(ofp, "------------------------\n");

    //Scans the words one line at a time
    while (fscanf(ifp, "%s", word) != EOF) {

        //Converts all case letters into lower case
        for (int i = 0; word[i]; i++) {
            word[i] = tolower(word[i]);
        }

        //Displays the word before determining its plural form
        printf("%-15s", word);
        fprintf(ofp, "%-15s", word);

        //Determines the plural form of the word
        getPluralForm(word);

        //Displays the plural form
        printf("%s\n", word);
        fprintf(ofp, "%s\n", word);
    }

    //Closes the files
    fclose(ifp);
    fclose(ofp);

    return 0;
}

//Determines the plural form of the current word
void getPluralForm(char word[]) {
    
    int word_length = strlen(word); //Counts how long is the word 
    int last_letter = word_length - 1; //Determines the location of the last letter
    int second_last_letter = word_length - 2;//Determines the location of the second to the last letter

    //Adds "es" to words ending with 's', 'sh', 'ch', 'x', or 'z'
    if (word[last_letter] == 's' || word[last_letter] == 'x' || word[last_letter] == 'z' || (word[second_last_letter] == 's' && word[last_letter] == 'h') || (word[second_last_letter] == 'c' && word[last_letter] == 'h')) 
        strcat(word, "es");

    //If the word ends with 'y'
    else if (word[last_letter] == 'y') {
        //If the letter before 'y' is a vowel
        if (word[second_last_letter] == 'a' || word[second_last_letter] == 'e' || word[second_last_letter] == 'i' || word[second_last_letter] == 'o' || word[second_last_letter] == 'u')
            strcat(word, "s");
        
        //If the letter before 'y' is a constant
        else {
            word[last_letter] = 'i';
            strcat(word, "es");
        }
    }
    //Adds 's' to any other words
    else
        strcat(word, "s");

}
