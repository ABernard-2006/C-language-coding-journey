#include <stdio.h>
// Allen Bernard R. Aurellano (CS1A)

const char* isPrime(int x);
const char* isPerfect(int y);

int main()
{
    int num;

printf("Enter a positive integer (Ctrl-Z to end): ");

while (scanf("%d", &num) != EOF)
{
    printf(" prime: %s", isPrime(num));
    printf("\n perfect: %s\n", isPerfect(num));

    printf("\nEnter a positive integer (Ctrl-Z to end): ");
    fflush(stdin);
} 
    printf(" End of program.Thanks!");
    return 0;
}

const char* isPrime(int x)
{
    if(x <= 1)
        return "NO";
    for(int a = 2; a * a <= x; a++)
    {
        if (x % a == 0)
            return "NO";
    }
    return "YES";
}

const char* isPerfect(int y)
{
    int sum = 0;
    
    for(int z = 1; z <= y/2; z++)
    {
        if (y % z == 0)
            sum += z;
    }
    if(sum == y)
        return "YES";
    else
        return "NO";
}