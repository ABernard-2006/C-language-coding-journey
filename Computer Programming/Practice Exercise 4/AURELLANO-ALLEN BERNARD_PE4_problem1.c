#include <stdio.h>

int main()
{
    float s1, s2, s3;

    printf("Enter side 1: ");
    scanf("%f", &s1);
    printf("Enter side 2: ");
    scanf("%f", &s2);
    printf("Enter side 3: ");
    scanf("%f", &s3);

    if(s1+s2>s3 && s1+s3>s2 && s2+s3>s1)
    {
        if(s1==s2 && s1==s3)
            printf("\nTriangle type: Equilateral");
        else if(s1==s2 || s1==s3 || s2==s3)
            printf("\nTriangle type: Isosceles");
        else
            printf("\nTriangle type: Scalene");
    }
    else
        printf("\nNot a valid triangle.");
    return 0;
}