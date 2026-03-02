#include <stdio.h>

int main()
{
    float year, sal;
    int pos, bon;

    printf("Enter years of service: ");
    scanf("%f", &year);
    printf("Enter position (1-3): ");
    scanf("%d", &pos);

    if(pos!=1 && pos!=2 && pos!=3)
    printf("\nInvalid position");
    else
    {
        printf("Enter salary: ");
        scanf("%f", &sal);

        switch(pos)
        {
            case 1:
            if(year<5)
            {
                bon = 0;
                printf("\nBonus: %d (0%% of salary for Manager)", bon);
            }
            else
            {
                bon = sal*.20;
                printf("\nBonus: %d (20%% of salary for Manager)", bon);
            }
            break;
            case 2:
                    if(year<5)
            {
                bon = 0;
                printf("\nBonus: %d (0%% of salary for Team Lead)", bon);
            }
            else
            {
                bon = sal*.15;
                printf("\nBonus: %d (15%% of salary for Team Lead)", bon);
            }
            break;
            case 3:
                    if(year<5)
            {
                bon = 0;
                printf("\nBonus: %d (0%% of salary for Staff)", bon);
            }
            else
            {
                bon = sal*.10;
                printf("\nBonus: %d (10%% of salary for Staff)", bon);
            }
            break;
        }
    }
    return 0;
}