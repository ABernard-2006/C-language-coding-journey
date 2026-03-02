#include <stdio.h>

int main()
{
    int num, a;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num <= 1)
       printf("The number %d is a composite number.", num);
    for (int a = 2; a * a <= num; a++)
    {
        if (num % a == 0)
           printf("The number %d is a composite number.", num);
    }
    printf("The number %d is a prime number.", num);
    
    return 0;
}