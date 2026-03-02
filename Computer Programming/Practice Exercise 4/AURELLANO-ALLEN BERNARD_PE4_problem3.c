#include <stdio.h>

int main()
{
    int age, type, price;

    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter membership type (1-3): ");
    scanf("%d", &type);

    if(type==1)
    {
        if(age<18)
        {
            price = 100*.8;
            printf("\nPrice after discount: $%d (20%% discount applied to Basic membership)", price);
        }
        else if(age>=18 && age<=60)
        {
            price = 100;
            printf("\nPrice after discount: $%d (0%% discount applied to Basic membership)", price);
        }
        else
        {
            price = 100*.7;
            printf("\nPrice after discount: $%d (30%% discount applied to Basic membership)", price);
        }
    }
    else if(type==2)
    {
        if(age<18)
        {
            price = 500*.8;
            printf("\nPrice after discount: $%d (20%% discount applied to Premium membership)", price);
        }
        else if(age>=18 && age<=60)
        {
            price = 500;
            printf("\nPrice after discount: $%d (0%% discount applied to Premium membership)", price);
        }
        else
        {
            price = 500*.7;
            printf("\nPrice after discount: $%d (30%% discount applied to Premium membership)", price);
        }
    }
    else if(type==3)
    {
                if(age<18)
        {
            price = 1000*.8;
            printf("\nPrice after discount: $%d (20%% discount applied to VIP membership)", price);
        }
        else if(age>=18 && age<=60)
        {
            price = 1000;
            printf("\nPrice after discount: $%d (0%% discount applied to VIP membership)", price);
        }
        else
        {
            price = 1000*.7;
            printf("\nPrice after discount: $%d (30%% discount applied to VIP membership)", price);
        }
    }
    else
    {
        printf("\nInvalid");
    }
    return 0;
}