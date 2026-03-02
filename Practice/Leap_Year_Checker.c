#include <stdio.h>

int main()
{
    int year, rem, rem1, rem2;

    printf("Enter a year: ");
    scanf("%d", &year);

    rem = year%4;
    rem1 = year%100;
    rem2 = year%400;

    if(rem == 0 && rem1!=0)
    {
        printf("The year %d is a LEAP year.", year);
    }
    else if (rem == 0 && rem2==0)
    {
        printf("The year %d is a LEAP year.", year);
    }
    else
    {
        printf("The year %d is NOT  a leap year.", year);
    }

    return 0;
}