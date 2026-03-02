#include <stdio.h>

 /* Allen Bernard R. Aurellano (CS1A)*/

int main()
{
    float bill, tip, num, total, ind;

    printf("Enter bill amount: ");
    scanf("%f", &bill);

    printf("Enter tip percentage: ");
    scanf("%f", &tip);

    printf("Enter number of people: ");
    scanf("%f", &num);

    tip = tip / 100;
    tip = tip * bill;
    total = bill + tip;
    ind = total / num;

    printf("\nTotal Bill: %.2f", total);
    printf("\nEach person should pay: %.2f", ind);

    return 0;
}