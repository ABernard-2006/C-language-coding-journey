#include <stdio.h>

typedef struct
{
    char name[20];
    int age;
    char when[20];
} Friend;


int main()
{
    Friend friend[20];

    int num_friends;

    printf("Enter the number of friends you have: ");
    scanf("%d", &num_friends);

    for(int i = 0; i < num_friends; i++)
    {
        printf("\nEnter your friend's name: ");
        scanf(" %s", friend[i].name);
        printf("Enter your friend's age: ");
        scanf("%d", &friend[i].age);
        printf("Enter how you know your friend: ");
        scanf("%s", friend[i].when);
    }


    for(int i = 0; i < num_friends; i++)
    {
        printf("\n %s %d  %s.\n", friend[i].name, friend[i].age, friend[i].when);
    }

    return 0;
}