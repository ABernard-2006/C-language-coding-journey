#include <stdio.h>

int main ()
{
    char name[50];
    float height, weight, BMI;

    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter weight (kg): ");
    scanf("%f", &weight);
    printf("Enter height (m): ");
    scanf("%f", &height);

    BMI = weight/(height*height);

    printf("%s's BMI: %.2f\n", name, BMI);

    if(BMI<18.5)
        printf("\nCategory: Underweight");
    else if(BMI>=18.5 && BMI<25)
        printf("\nCategory: Normal weight");
    else if(BMI>=25 && BMI<30)
        printf("\nCategory: Overweight");
    else
        printf("\nCategory: Obese");
    
    return 0;
}