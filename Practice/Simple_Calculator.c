#include <stdio.h>
    
int main()
{
    int num, yn;            // yn is yes or no
    float x, y;
    float sum, dif, prod, quo;
    
    do
        {
        printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
        printf("\nInput the number of the operation that you want to perform: ");
        scanf("%d", &num);

        if (num==1)
        {
            printf("\nEnter the numbers you want to add: ");
            scanf("%f %f", &x, &y);
            sum=x+y;
            printf("\nThe sum is %.2f.\n", sum);
        }
        else if(num==2)
        {
            printf("\nEnter the numbers you want to subtract: ");
            scanf("%f %f", &x, &y);
            dif=x-y;
            printf("\nThe difference is %.2f.\n", dif);
        }
        else if(num==3)
        {
            printf("\nEnter the numbers you want to multiply: ");
            scanf("%f %f", &x, &y);
            prod=x*y;
            printf("\nThe product is %.2f.\n", prod);
        }
        else if(num==4)
        {
            printf("\nEnter the numbers you want to divide: ");
            scanf("%f %f", &x, &y);
            if(y!=0)
            {
                quo=x/y;
                printf("\nThe quotient is %.2f.\n", quo);
            }
            else
            {
                printf("Undefined");
            }
        }
        else
        {
            printf("You entered a number not in the option.\n");
        }
            printf("\nWould you like to try again?\n");
            printf("\nEnter 0 to CONTINUE and any number to STOP.\n");
            scanf("%d", &yn);
        }
    while(yn==0);

        printf("\nThank you for trying this simple calculator :>");

    return 0;
}