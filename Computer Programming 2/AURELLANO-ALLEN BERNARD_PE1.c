//Allen Bernard R. Aurellano BSCS-1A

#include <stdio.h>

int countDigits(int n);
int countDigits(int n)
{
    if (n < 10)
        return 1;         

    return 1 + countDigits(n / 10);
}

int sumDigits(int n);
int sumDigits(int n)
{
    if (n == 0)
        return 0;

    return (n % 10) + sumDigits(n / 10);
}

int reverseNum(int n);
int reverseNum(int n)
{
    if (n < 10)
        return n;  

    int digits = countDigits(n);
    int power = 1;

    for (int i = 1; i < digits; i++)
        power *= 10;

    return (n % 10) * power + reverseNum(n / 10);
}

long long toBinary(long long n);
long long toBinary(long long n)
{
    if (n == 0)
        return 0;

    return (toBinary(n / 2) * 10) + (n % 2);
}


int main()
{
    int input;
    int choice=0;

    printf("Enter a positive integer: ");
    scanf("%d", &input);

    while(choice!=5)
    {
        printf("\nChoose an operation:\n1 - Count Digits\n2 - Sum of Digits\n3 - Reverse the number\n4 - Convert to Binary\n5 - Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nNumber of digits = %d\n\n", countDigits(input));
            break;
        case 2:
            printf("\nSum of digits = %d\n\n", sumDigits(input));
            break;
        case 3:
            printf("\nReverse of the number = %d\n\n", reverseNum(input));
            break;
        case 4:
            printf("\nBinary Representation = %lld\n\n", toBinary(input));
            break;
        case 5:
            printf("\nEnd of Program. Thank you.");
            break;
        default:
            printf("\nInvalid choice. Try again.\n\n");
            break;
        }
    }

    return 0;
}