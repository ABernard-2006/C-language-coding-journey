#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, check=0;
    char names[100][100], key[100];

    printf("Enter number of names: ");
    scanf("%d", &n);

    printf("Enter Names: ");
    for(i=0; i<n; i++)
        scanf("%s", names[i]);
    
    printf("Enter the name you want to find: ");
    scanf("%s", key);

    for(i=0;i<n;i++)
    {
    if(strcmp(key, names[i])==0)
        {
        check=1;
        break;
        }
    }

    if(check)
    printf("Found at index %d.", i);
    else
    printf("Not found.");

    return 0;
}