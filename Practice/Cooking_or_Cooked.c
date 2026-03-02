#include <stdio.h>

int main()
{

    int x;

    printf("Have you studied? Rate 1-10: ");
    scanf("%d", &x);

    if(x>=8 && x <= 10)
        printf("You are cooking!");
    else if (x>10)
    {
       printf("You're on fire!");
    }
    else
        printf("You are cooked!");

    return 0;
}