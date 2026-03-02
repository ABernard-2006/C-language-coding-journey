#include <stdio.h>

int main()
{
    int num, z, x;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Multiplacation Table for %d:\n\n", num);
    printf("---------------\n");
    for(z=1; z<11; z++)
    {
        x = num*z;
        printf("%d * %d = %d\n", num, z, x);
    }
     printf("---------------\n");
    return 0;
}