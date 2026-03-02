#include <stdio.h>
#include <string.h>

int main()
{
    char name [50]= "AB";
    char copy[100];

    strcat(name, "ab");
    printf("Name: ", name);
    
    
    scanf("%s", name);

    printf("%c\n", name[0]);

    strcpy(copy, name); //copies string
    printf("%s", copy);

    strcat(name, copy); //appends
    printf("\n%s", name);

    printf("%d", strlen(name)); //brings back the length

    if(strcmp("B", "Bernard")<0) //compares
    printf("\nAllen Bernard");
    else
    printf("\nBernard Allen");
    return 0;
}