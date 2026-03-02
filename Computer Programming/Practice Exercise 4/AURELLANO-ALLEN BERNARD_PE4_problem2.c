#include <stdio.h>

int main()
{
    char name[50];
    float power, bill;

    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter power consumption (kWh): ");
    scanf("%f", &power);

    if(power<=100)
    {
        bill = power*0.50;
        printf("\n%s's bill at $0.50/kWh is: $%.2f", name, bill);
    }
    else if(power>100 && power<=300)
    {
        bill = power*0.75;
        printf("\n%s's bill at $0.75/kWh is: $%.2f", name, bill);
    }
    else
    {
        bill = power*1.0;
        printf("\n%s's bill at $1.00/kWh is: $%.2f", name, bill);
    }
    return 0;
}