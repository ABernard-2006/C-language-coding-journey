#include <stdio.h>
#include <string.h>

void leaveMessage(void)
{
    char message[256];

    printf("Enter your message: ");
    fgets(message, sizeof(message), stdin);
    message[strcspn(message, "\n")] = '\0';

    FILE *file = fopen("messages.txt", "a");
    if (file == NULL)
    {
        printf("Could not save your message.\n");
        return;
    }
    fprintf(file, "%s\n", message);
    fclose(file);

    printf("Message saved! Here are all the messages left so far:\n");

    file = fopen("messages.txt", "r");
    char line[256];
    while (fgets(line, sizeof(line), file) != NULL)
    {
        printf("- %s", line);
    }
    fclose(file);
}

int main()
{
    char choice;

    printf("A. Leave a message\nB. See advice of the day\nC. Exit\n");

    printf("Enter your choice (A/B/C): ");
    scanf(" %c", &choice);
    getchar();

    if (choice == 'A' || choice == 'a')
    {
        leaveMessage();
    }
    else if (choice == 'B' || choice == 'b')
    {
        printf("You chose to see the advice of the day.\n");
    }
    else if (choice == 'C' || choice == 'c')
    {
        printf("You chose no.\n");
    }
    else
    {
        printf("Invalid choice.\n");
    }

    return 0;
}