// EXERCISE 8 - Reverse Number

#include <stdio.h>

int reverseNumber(int n, int reversed);

int main() {
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("Reversed = %d\n", reverseNumber(n, 0));

    return 0;
}

int reverseNumber(int n, int reversed) {
    if (n == 0)
        return reversed;

    return reverseNumber(n / 10, reversed * 10 + n % 10);
}