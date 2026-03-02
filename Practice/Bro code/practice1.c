#include <stdio.h>

int main()
{
    float num;

    while(scanf("%f", &num) > 0)
    {
        if (num>0)
        {
        printf("Happy");
        }
        else if(num<0)
        printf("sad");
    }


    return 0;
}