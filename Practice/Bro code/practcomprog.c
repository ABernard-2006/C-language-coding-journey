#include <stdio.h>
#include <stdlib.h>
//DHUSTINE F. GADDI CS1A
//ALLEN BERNARD R. AURELLANO CS1A
int summation(int X, int Y);

int summation(int X, int Y)
{
    int i;
    int sum = 0;
    if (X<Y)
    {
        for(i=X; i<=Y; i++)
        {
            sum += i;
        }
        return sum;
    }
    else
    {
        i=X;
        do
        {
            sum+=i;
            i--;
        }while(i>=Y);
        return sum;
    }   
}

int main() {
    int X, Y;
    char choice;

    printf("Input two positive integers (Ctrl-D to end): ");
    while(scanf("%d %d", &X, &Y) != EOF)
    {
        printf("Enter letter of choice: ");
        scanf(" %c", &choice);

        switch(choice)
        {
            case 'A':
            case 'a':
                printf("Output: The sum of the integers between %d and %d is %d\n\n", X, Y, summation(X, Y));
                break;
            
            case 'B':
            case 'b':
                printf("Output: ");
                if(X>Y)
                {
                    for(int i=X; i>=Y; i--)
                    {
                        printf("%d ", i);
                    }
                }
                else
                {
                    for(int i=X; i<=Y; i++)
                    {
                        printf("%d ", i);
                    }
                    printf("\n\n");
                }
                break;
            
            default:
            printf("Not a valid letter of choice.\n\n");
            break;
        }
        printf("Input two positive integers (Ctrl-D to end): ");
    }
printf("End of program. Merry Christams!");
    return 0;
}