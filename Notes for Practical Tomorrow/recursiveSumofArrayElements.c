// EXERCISE 1 - Recursive Array Sum

#include <stdio.h>

int arraySum(int arr[], int size);

int main() {
    int arr[100], n, i;

    printf("How many numbers? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Sum = %d\n", arraySum(arr, n));

    return 0;
}

int arraySum(int arr[], int size) {
    if (size == 0)
        return 0;

    return arr[size - 1] + arraySum(arr, size - 1);
}