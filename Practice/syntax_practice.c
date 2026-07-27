#include <stdio.h>

int main()
{
    int age;
    char name[100];

    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("\nHello, %s!\nYou are %d years old.\n", name, age);

    return 0;
}