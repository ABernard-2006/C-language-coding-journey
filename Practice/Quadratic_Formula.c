#include <stdio.h>
#include <math.h>

 // Quadratic Equation factors and root finders

int main()
{
    float x1, x2, a, b, c, s1, s2;
    char y1='+' , y2='-'; 
    float dcr;            // dicriminant

    printf("Enter value for the coefficients: ");
    scanf("%f %f %f", &a, &b, &c);

    dcr=sqrt((b*b)-(4*a*c));

    if (dcr>=0)
    {
        x1= (-b + (sqrt ((b*b)-(4*a*c))))/(2*a);
        x2= (-b - (sqrt ((b*b)-(4*a*c))))/(2*a);
            if (x1>0)
            {
            printf("The factors are (x%c%.2f) ", y2, x1);
            }
            else if(x1<0)
            {
                s1=(-1*x1);
                printf("The factors are (x%c%.2f) ",y1, s1);
            }
            else
            {
                printf("The factors are (x) ");
            }
            if (x2>0)
            {
            printf("and (x%c%.2f).\n", y2, x2);
            }
            else if(x2<0)
            {
                s2=(-1*x2);
                printf("and (x%c%.2f).\n", y1, s2);
            }
            else
            {
                printf("and (x).\n");
            }
        printf("The roots are %f and %f.", x1, x2);
    }
    else
    {
        printf("There is no real root.");
    }

    return 0;
}