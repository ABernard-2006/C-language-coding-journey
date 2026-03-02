#include <stdio.h>
#include <string.h>

int main()
{
    int quan;
    float price, bill;
    char item[50];

    printf("What item would you like to buy?: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item)-1]='\0';

    printf("What is the price for each?: ");
    scanf("%f", &price);

    printf("How many would you like?: ");
    scanf("%d", &quan);

    bill=price*quan;

    printf("\nYou have bought %d %s/s\n", quan, item);
    printf("The total is $%.2f", bill);

    return 0;
}