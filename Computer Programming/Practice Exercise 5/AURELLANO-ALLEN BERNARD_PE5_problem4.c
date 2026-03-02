#include <stdio.h>

int main()
{
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("\nOutput of Collatz Conjecture:\n%d", num);

    do
    {
        if(num>0)
        {
            if(num%2==0)
            {
                num/=2;
                printf(" -> %d", num);
            }
            else
            {
                num= (num*3)+1;
                printf(" -> %d", num);
            }
        }
        else
        {
        printf("\n\nInvalid: Please enter a positive integer");
        break;
        }
    } while (num!=1);
    
    return 0;
}