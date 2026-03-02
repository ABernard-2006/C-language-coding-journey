#include <stdio.h>

int main()
{
    int num=0; 
    int sum=0;

    do
    {
        if(num%2==0)
        {
        sum += num;
        }
        printf("Enter an integer(input negative value to stop): ");
        scanf("%d", &num);
    } while (num>=0);

    printf("\nThe sum of all positive even integers is: %d", sum);

    return 0;
}