#include <stdio.h>

 /* 
    Allen Bernard R. Aurellano (CS1A)
    Automated Quiz Rating Computer (Using File I/O)
    This program is designed to compute the rating of five quizzes of a student and his/her overall average rating.
    The input will be from a file named "data.in" and the output will be stored in a file named "result.out".
 */
 
int main()
{
    char stud_name[30];
    int total1, total2, total3, total4, total5, s1, s2, s3, s4, s5;         
    float r1, r2, r3, r4, r5, average = 0;  
    FILE *ifp;
    FILE *ofp;

    ifp=fopen("data.in", "rt");
    ofp=fopen("report.out", "at");

    printf("Reading first name of student...\n\n");
    fscanf(ifp, "%s", stud_name);

    printf("Reading scores for quiz 1...\n\n");
    fscanf(ifp, "%d %d", &total1, &s1);
    printf("Reading scores for quiz 2...\n\n");
    fscanf(ifp, "%d %d", &total2, &s2);
    printf("Reading scores for quiz 3...\n\n");
    fscanf(ifp, "%d %d", &total3, &s3);
    printf("Reading scores for quiz 4...\n\n");
    fscanf(ifp, "%d %d", &total4, &s4);
    printf("Reading scores for quiz 5...\n\n");
    fscanf(ifp, "%d %d", &total5, &s5);

    r1 = (s1 * 100.0) / total1;
    r2 = (s2 * 100.0) / total2;
    r3 = (s3 * 100.0) / total3;
    r4 = (s4 * 100.0) / total4;
    r5 = (s5 * 100.0) / total5;

    average = (r1 + r2 + r3 + r4 + r5) / 5.0;

    fprintf(ofp, "\nQuiz Report of \"%s\"\n", stud_name);
    fprintf(ofp, "---------------------------------------\n");
    fprintf(ofp, "QUIZ# |  SCORE  |  TOTAL  |  RATING   |\n");
    fprintf(ofp, "---------------------------------------\n");
    fprintf(ofp, "|1    | %7d | %7d | %7.2f%%  |\n", s1, total1, r1);
    fprintf(ofp, "|2    | %7d | %7d | %7.2f%%  |\n", s2, total2, r2);
    fprintf(ofp, "|3    | %7d | %7d | %7.2f%%  |\n", s3, total3, r3);
    fprintf(ofp, "|4    | %7d | %7d | %7.2f%%  |\n", s4, total4, r4);
    fprintf(ofp, "|5    | %7d | %7d | %7.2f%%  |\n\n", s5, total5, r5);
    fprintf(ofp, "Quiz Average Rating: %.2f%%", average);

    fclose(ifp);
    fclose(ofp);

    return 0;
}