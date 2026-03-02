#include <stdio.h>

//Ask for a grade (0–100). Print "Pass" if the grade is between 75 and 100, otherwise print "Fail".
// Use logical operators (&&, ||).

int main()
{
 int grade;

 printf("Enter your grade: ");
 scanf("%d", &grade);

 if(grade>=75 && grade<=100)
 {
    printf("Congratulataions!\nYou passed!");
 }
 else if (grade>100)
 {
    printf("You're at the top of the world!");
 }
 else
 {
    printf("Sorry:<\nYou failed.");
 }

    return 0;
}