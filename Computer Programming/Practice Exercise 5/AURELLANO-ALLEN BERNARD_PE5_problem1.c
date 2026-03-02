#include <stdio.h>

int main()
{
    int num1, num2, prod;

    for(num1=1;num1<=10;num1++)
    {
        for(num2=1;num2<=10;num2++)
        {
        prod = num1*num2;
        printf("%d x %d = %d\n", num1, num2, prod);
        }
    }
    return 0;
}