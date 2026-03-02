#include <stdio.h>

 /* 
    Allen Bernard R. Aurellano (CS1A)
    Automated Quiz Rating Computer
    This program is designed to compute the rating of five quizzes of a student and his/her overall average rating.
 */
 
int main()
{
    char stud_name[30];
    int total1, total2, total3, total4, total5, s1, s2, s3, s4, s5;         
    float r1, r2, r3, r4, r5, average = 0;  

    printf("Input first name of student: ");
    scanf("%s", stud_name);

    printf("\nPlease input five pairs of integer values representing the total\nnumber of points and score of %s's quizzes.\n", stud_name);

    printf("Input Quiz 1 : ");
    scanf("%d %d", &total1, &s1);
    printf("Input Quiz 2 : ");
    scanf("%d %d", &total2, &s2);
    printf("Input Quiz 3 : ");
    scanf("%d %d", &total3, &s3);
    printf("Input Quiz 4 : ");
    scanf("%d %d", &total4, &s4);
    printf("Input Quiz 5 : ");
    scanf("%d %d", &total5, &s5);

    r1 = (s1 * 100.0) / total1;
    r2 = (s2 * 100.0) / total2;
    r3 = (s3 * 100.0) / total3;
    r4 = (s4 * 100.0) / total4;
    r5 = (s5 * 100.0) / total5;

    average = (r1 + r2 + r3 + r4 + r5) / 5.0;

    printf("\nQuiz Report of \"%s\"\n", stud_name);
    printf("---------------------------------------\n");
    printf("QUIZ# |  SCORE  |  TOTAL  |  RATING   |\n");
    printf("---------------------------------------\n");
    printf("|1    | %7d | %7d | %7.2f%%  |\n", s1, total1, r1);
    printf("|2    | %7d | %7d | %7.2f%%  |\n", s2, total2, r2);
    printf("|3    | %7d | %7d | %7.2f%%  |\n", s3, total3, r3);
    printf("|4    | %7d | %7d | %7.2f%%  |\n", s4, total4, r4);
    printf("|5    | %7d | %7d | %7.2f%%  |\n\n", s5, total5, r5);
    printf("Quiz Average Rating: %.2f%%", average);

    return 0;
}