#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, length;
    char names[100][100], longest[100];

    printf("Enter number of names: ");
    scanf("%d", &n);

    printf("Enter Names: ");
    for(i=0; i<n; i++)
        scanf("%s", names[i]);
    
    strcpy(longest, names[0]);
    for(i=1; i<=n; i++)
    {
        if(strlen(longest)<strlen(names[i]))
        {
        strcpy(longest, names[i]);
        length = strlen(longest);
        }
    }   
    printf("The longest name is %s with a length %d.", longest, length);

    return 0;
}
