// EXERCISE 3 - Recursive Power

#include <stdio.h>

int power(int base, int exp);

int main() {
    int base, exp;

    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);

    printf("Result = %d\n", power(base, exp));

    return 0;
}

int power(int base, int exp) {
    if (exp == 0)
        return 1;

    return base * power(base, exp - 1);
}