// Allen Bernard R. Aurellano CS1A

#include <stdio.h>

int main()
{
    char name[50];
    int age;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("\nHello, %s! You are %d years old.", name, age);

    return 0;
}