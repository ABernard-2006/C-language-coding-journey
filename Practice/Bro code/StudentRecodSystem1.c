#include <stdio.h>

typedef struct 
{
    char name[50];
    int age;
    float grade;
} student;

int main()
{
    student record[100];
    int number, counter, display;

    printf("Enter the number of student you want to record [Max of 100]: ");
    scanf("%d", &number);

    if(number>100)
        printf("Max is only 100 student.\n");
    else
    {
        for(counter=0; counter<number ; counter++)
        {
            printf("\nEnter student name: ");
            scanf(" %s", record[counter].name);
            printf("Enter age: ");
            scanf("%d", &record[counter].age);
            printf("Enter grade: ");
            scanf("%f", &record[counter].grade);
        }
    }

    printf("\nDo you want to display the record?\n");
    printf("Enter 1 if yes and 0 if no: ");
    scanf("%d", &display);

    switch(display)
    {
        case 1:
        printf("\nName\t\tAge\t\tGrade\n");
        printf("=====================================\n");
        for(counter=0; counter<number ; counter++)
        {
            printf("%s\t\t%d\t\t%.2f\n", record[counter].name, record[counter].age, record[counter].grade);
        }
        break;
        case 0:
        printf("Thank you.");
        break;
    }

    return 0;
}