#include <stdio.h>

int main()
{
    int num;
    int rev;                    //reverse

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num>0)
    {
        rev=num%10;
        printf("%d", rev);
        num=(num-rev)/10;
    }

    return 0;
}