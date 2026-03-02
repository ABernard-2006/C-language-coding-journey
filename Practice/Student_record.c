#include <stdio.h>
#include <string.h>

// Appends student's grade in different subject

int main()
{
    char sub[50];
    char name[50];
    char type[50];
    float grade;

    FILE *ofp;
    ofp = fopen("User_Record.txt", "at");

    printf("Enter your name: ");
    fgets(name, 50, stdin);
    name[strcspn(name, "\n")] = 0;

    printf("Enter the subject: ");
    fgets(sub, 50, stdin);
    sub[strcspn(sub, "\n")] = 0;

    printf("Type (e.g. exam, quiz...): ");
    fgets(type, 50, stdin);
    type[strcspn(type, "\n")] = 0;

    printf("Enter grade: ");
    scanf("%f", &grade);

    fprintf(ofp, "%s %s %s %.2f\n", name, sub, type, grade);

    fclose(ofp);

    printf("Recorded Successfully!");
    return 0;
}