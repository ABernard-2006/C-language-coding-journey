#include <stdio.h>

void rep()
{
    int num, yn;            // yn is yes or no
    float x, y;
    float sum, dif, prod, quo;
    
    do
    {
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("Input the number of the operation that you want to perform: ");
    scanf("%d", &num);

    if (num==1)
    {
        printf("Enter the numbers you want to add: ");
        scanf("%f %f", &x, &y);
        sum=x+y;
        printf("The sum is %.2f.", sum);
    }
    else if(num==2)
    {
        printf("Enter the numbers you want to subtract: ");
        scanf("%f %f", &x, &y);
        dif=x-y;
        printf("The sum is %.2f.", dif);
    }
    else if(num==3)
    {
        printf("Enter the numbers you want to multiply: ");
        scanf("%f %f", &x, &y);
        prod=x*y;
        printf("The sum is %.2f.", prod);
    }
    else if(num==4)
    {
        printf("Enter the numbers you want to divide: ");
        scanf("%f %f", &x, &y);
        quo=x/y;
        printf("The sum is %.2f.", quo);
    }
    else
    {
        printf("You entered a number not in the option.\n");
    }

    printf("Would you like to try again?\n");
    printf("Enter 1 to CONTINUE and any number to STOP.");
    scanf("%d", &yn);
    }
    while(yn=1);
}