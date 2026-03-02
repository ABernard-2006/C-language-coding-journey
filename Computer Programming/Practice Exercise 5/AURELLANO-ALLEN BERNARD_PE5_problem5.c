#include <stdio.h>

int main()
{
    int num1, num2, n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    printf("\n");

    for(num1=1;num1<=n;num1++)
    {
        for(num2=1;num2<=num1;num2++)
        {
            printf("%d ", num1);
        }
        printf("\n");
    }

    return 0;
}