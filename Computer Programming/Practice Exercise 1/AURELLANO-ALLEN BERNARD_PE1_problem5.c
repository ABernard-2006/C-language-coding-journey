#include <stdio.h>

 /* Allen Bernard R. Aurellano (CS1A)*/

int main()
{
     int amount, payment, change, thousand, fhundred, thundred, ohundred, fifty, twenty, ten, five, one, remainder;

    printf("Enter the total amount payable: ");
    scanf("%d", &amount);

    printf("Payment received: ");
    scanf("%d", &payment);

    change = payment - amount;
    printf("\nThe total amount of change: %d", change);

    thousand = change / 1000;
    remainder = change % 1000;
    fhundred = remainder / 500; 
    remainder = remainder % 500;
    thundred = remainder / 200;
    remainder = remainder % 200;
    ohundred = remainder / 100;
    remainder = remainder % 100;
    fifty = remainder / 50;
    remainder = remainder % 50;
    twenty = remainder / 20;
    remainder = remainder % 20; 
    ten = remainder / 10;
    remainder = remainder % 10;
    five = remainder / 5;
    remainder = remainder % 5;
    one = remainder;

    printf("\nNumber of 1000 bills: %d", thousand);
    printf("\nNumber of 500 bills: %d", fhundred);
    printf("\nNumber of 200 bills: %d", thundred);
    printf("\nNumber of 100 bills: %d", ohundred);
    printf("\nNumber of 50 bills: %d", fifty);
    printf("\nNumber of 20 bills: %d", twenty);
    printf("\nNumber of 10 coins: %d", ten);
    printf("\nNumber of 5 coins: %d", five);
    printf("\nNumber of 1 coins: %d", one);

    return 0;
}