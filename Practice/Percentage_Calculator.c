#include <stdio.h>

// a program that asks for total points and score, then prints the percentage with 2 decimal places.

int main()
{
    float x, y, r;

    printf("Enter your score and the total score possible: ");
    scanf("%f %f", &x, &y);

    r = x/y*100;

    printf("Score percentage is %.2f.", r);

    return 0;
}