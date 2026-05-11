#include <stdio.h>


typedef struct
{
    char name[20];
    float salary;
    float daily_hours;
    float hourly_wage;
} Employee;

int main()
{
    Employee employee[20];

    int num_employees;
    printf("Enter the number of employees: ");
    scanf("%d", &num_employees);

    for(int i = 0; i < num_employees; i++)
    {
        printf("\nEnter employee's name: ");
        scanf(" %s", employee[i].name);
        printf("Enter employee's hourly wage: ");
        scanf("%f", &employee[i].hourly_wage);
        printf("Enter employee's daily working hours: ");
        scanf("%f", &employee[i].daily_hours);

        employee[i].salary = employee[i].hourly_wage * employee[i].daily_hours;
    }

    printf("\nEmployee Salary Details:\n");
    printf("--------------------------------------------------\n");
    printf("Name\t\tHourly Wage\tDaily Hours\tSalary\n");
    for(int i = 0; i < num_employees; i++)
    {
        printf("%s\t\t%.2f\t\t%.2f\t\t%.2f\n", employee[i].name, employee[i].hourly_wage, employee[i].daily_hours, employee[i].salary);
    }

    return 0;
}