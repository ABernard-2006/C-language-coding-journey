#include <stdio.h>

int main()
{
    int num, sqr, cube;

    printf("Enter a year: ");
    scanf("%d", &num);

    sqr = num*num;
    cube = num*num*num;

    printf("\nThe square of the number %d is %d.\n", num, sqr);
    printf("The cube of the number %d is %d.", num, cube);

    return 0;
}