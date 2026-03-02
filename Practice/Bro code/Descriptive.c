#include <stdio.h>
#include <string.h>

int main()
{
    char desc[50], noun[50], adj[50], verb[50], adj2[50];

    printf("Enter and adjective (description): ");
    fgets(desc, sizeof(desc), stdin);
    desc[strlen(desc)-1]='\0';

    printf("Enter a noun (animal or a person): ");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun)-1]='\0';

    printf("Enter and adjective (description): ");
    fgets(adj, sizeof(adj), stdin);
    adj[strlen(adj)-1]='\0';

    printf("Enter a verb (ending w/ -ing): ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb)-1]='\0';
    
    printf("Enter and adjective (description): ");
    fgets(adj2, sizeof(adj2), stdin);
    adj2[strlen(adj2)-1]='\0';

    printf("\nToday, I went to a %s zoo.", desc);
    printf("\nIn an exhibit, I saw %s.", noun);
    printf("\n%s was %s and %s!", noun, adj, verb);
    printf("\nI was %s!", adj2);

    return 0;
}