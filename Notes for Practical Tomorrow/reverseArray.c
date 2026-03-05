// EXERCISE 5 - Reverse Array Recursively

#include <stdio.h>

void reverseArray(int arr[], int start, int end);

int main() {
    int arr[100], n, i;

    printf("How many numbers? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    reverseArray(arr, 0, n - 1);

    printf("Reversed array:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

void reverseArray(int arr[], int start, int end) {
    if (start >= end)
        return;

    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    reverseArray(arr, start + 1, end - 1);
}