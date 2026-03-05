// EXERCISE 1 - Recursive Addition

#include <stdio.h>

int recursiveAdd(int a, int b);

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Sum = %d\n", recursiveAdd(a, b));

    return 0;
}

int recursiveAdd(int a, int b) {
    if (b == 0)
        return a;

    return recursiveAdd(a + 1, b - 1);
}