#include <stdio.h>
#include <string.h>

int main ()
{
   char *x = "65";
   char y = '65';
   float z= 1;
   float prac= 1234567.123;
   int a=2;
   const int b=20;
float div = z/a; 
int age;
float GPA;
char grade;
char name [50];

printf("Enter age: ");
scanf("%d", &age);
printf("Enter GPA: ");
scanf("%f", &GPA);
printf("Enter grade: ");
scanf(" %c", &grade);

getchar();
printf("Enter name: ");
fgets(name, sizeof(name), stdin);
name[strlen(name) - 1] = '\0';

printf("\n%s\n", name);
printf("%d\n", age);
printf("%f\n", GPA);
printf("%c\n", grade);


    return 0;
}