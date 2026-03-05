// EXERCISE 5 - Factorial

#include <stdio.h>

int factorial(int n);

int main() {
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("Factorial = %d\n", factorial(n));

    return 0;
}

int factorial(int n) {
    if (n <= 1)
        return 1;

    return n * factorial(n - 1);
}