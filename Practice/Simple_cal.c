#include <stdio.h>

int main()
{
    char choice;
    float num1, num2, sum, dif, prod, quo;

    printf("A. Addition\nB. Subtraction\nC. Multiplication\nD. Divsion\n");
    printf("\nEnter the letter of the operation you want to perform: ");
    scanf("%c", &choice);

    switch (choice)
    {
    case 'A':
        printf("Enter two numbers you want to add: ");
        scanf("%f %f", &num1, &num2);
        sum = num1+num2;
        printf("%.2f", sum);        
        break;
    case 'B':
        printf("Enter two numbers you want to subtract: ");
        scanf("%f %f", &num1, &num2);
        dif = num1-num2;
        printf("%.2f", dif);
        break;
     case 'C':
        printf("Enter two numbers you want to multiply: ");
        scanf("%f %f", &num1, &num2);
        prod = num1*num2;
        printf("%.2f", prod);
        break;
     case 'D':
        printf("Enter two numbers you want to divide: ");
        scanf("%f %f", &num1, &num2);
        quo = num1/num2;
        printf("%.2f", quo);
        break;
    default:
        printf("Invalid!");
        break;
    }

    
    return 0;
}