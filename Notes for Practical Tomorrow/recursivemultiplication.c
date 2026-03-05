// EXERCISE 2 - Recursive Multiplication

#include <stdio.h>

int recursiveMultiply(int a, int b);

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Product = %d\n", recursiveMultiply(a, b));

    return 0;
}

int recursiveMultiply(int a, int b) {
    if (b == 0)
        return 0;

    return a + recursiveMultiply(a, b - 1);
}