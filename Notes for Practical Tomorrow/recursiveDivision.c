// EXERCISE 6 - Recursive Division

#include <stdio.h>

int recursiveDivide(int a, int b);

int main() {
    int a, b;

    printf("Enter dividend and divisor: ");
    scanf("%d %d", &a, &b);

    if (b == 0) {
        printf("Division by zero error\n");
        return 1;
    }

    printf("Quotient = %d\n", recursiveDivide(a, b));

    return 0;
}

int recursiveDivide(int a, int b) {
    if (a < b)
        return 0;

    return 1 + recursiveDivide(a - b, b);
}