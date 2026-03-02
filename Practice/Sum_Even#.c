#include <stdio.h>

// Computes the sum of even numbers until n

int main ()
{
    int n;
    int sum=0;
    int x=0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(x<n || x==n)
        {
        if(x%2==0)
        {
        sum= sum+x;
        x++;
        }
        else
        x++;
        }
    printf("The sum is %d.", sum);

    return 0;
}