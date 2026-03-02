#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, vowel=0;
    char names[100][100], longest[100];

    printf("Enter number of names: ");
    scanf("%d", &n);

    printf("Enter Names: ");
    for(i=0; i<n; i++)
        scanf("%s", names[i]);
    
    for(i=0; i<n; i++)
    {
    if(names[i][0]=='A'|| names[i][0]=='a'|| names[i][0]=='E'|| names[i][0]=='e'|| names[i][0]=='I'|| names[i][0]=='i'|| names[i][0]=='O'|| names[i][0]=='o'|| names[i][0]=='U'|| names[i][0]=='u')
    vowel++;
    }
    printf("Output: %d names start with vowel.", vowel);

    return 0;
}