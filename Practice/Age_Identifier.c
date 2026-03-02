#include <stdio.h>
// Write a program that asks for a person’s age. If the age is greater 
// than or equal to 18 and less than 60, print "Adult". Otherwise print "Not Adult".

int main() 
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age>=18 && age<60)
    {
        printf("You're an adult.");
    }
    else if(age>60)
    {
        printf("You're a senior.");
    }
    else
    {
        printf("You're a minor.");
    }
    
    return 0;
}