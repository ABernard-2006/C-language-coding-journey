#include <stdio.h>

int main()
{
    char choice;

    printf("Enter your choice (y/n): ");
    scanf(" %c", &choice);

    if (choice == 'y' || choice == 'Y')
    {
        printf("You chose yes.\n");
    }
    else if (choice == 'n' || choice == 'N')
    {
        printf("You chose no.\n");
    }
    else
    {
        printf("Invalid choice.\n");
    }

    return 0;
}