#include <stdio.h>

// Base and exponent computer

int main()
{
    float base,exp, res=0;
    int count=2;

    printf("Enter the base and exponent: ");
    scanf("%f %f", &base, &exp);

    if(exp>0)
    {
        res = base*base;
        while(count<exp)
        {
            res = res*base;
            count++;
        }
        printf("The answer is %.2f.",res);
    }
    else if(exp<0)
    {
        exp = exp*-1;
        res = base*base;
        while(count<exp)
        {
            res = res*base;
            count++;
        }
        res = 1/res;
        printf("The answer is %.2f.",res);
    }
    else
    {
        printf("The answer is 1.");
    }  

    return 0;
}