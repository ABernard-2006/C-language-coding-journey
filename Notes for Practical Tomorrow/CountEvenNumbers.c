// EXERCISE 4 - Count Even Numbers

#include <stdio.h>

int countEven(int arr[], int size);

int main() {
    int arr[100], n, i;

    printf("How many numbers? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Even numbers = %d\n", countEven(arr, n));

    return 0;
}

int countEven(int arr[], int size) {
    if (size == 0)
        return 0;

    return (arr[size - 1] % 2 == 0) + countEven(arr, size - 1);
}