#include <stdio.h>

int main()
{
    int num, rem;                    
    int sum=0;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num>0)
    {
        rem=num%10;
        sum+=rem;
        num=(num-rem)/10;
    }
    printf("\nSum of digits: %d", sum);

    return 0;
}