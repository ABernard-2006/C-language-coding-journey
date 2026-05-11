#include <stdio.h>

typedef struct 
{
    char name[50];
    int age;
    float grade;
    student *next;
} student;

int main()
{
    student *record, *head = NULL, *temp = NULL;
    int number, counter;

    printf("Enter the number of student you want to record: ");
    scanf("%d", &number);

    for(counter=0; counter<number ; number++)
    {
        record = (student*)malloc(sizeof(student));

        if(record == NULL)
        {
            printf("Unable to allocate memory.");
            break;
        }
        
        printf("Enter student name: ");
        scanf("%s", record->name);
        printf("Enter age: ");
        scanf("%d", &record->age);
        printf("Enter grade: ");
        scanf("%f", &record->grade);

        head = record;
        temp = head;
    }

// Unfinished

    return 0;
}