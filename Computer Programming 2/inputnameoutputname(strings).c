#include <stdio.h>
#define MAX 3
int main()
{
    int n, i;
    char names[MAX][100];

    printf("Enter number of names: ");
    scanf("%d", &n);

    printf("Enter names: ");
    for(i=0;i<n;i++)
        scanf("%s", names[i]);
    
    for(i=0; i<n; i++)
        printf("%s\n", names[i]);


    return 0;
}