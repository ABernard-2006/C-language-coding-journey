// EXERCISE 3 - Recursive Product

#include <stdio.h>

int arrayProduct(int arr[], int size);

int main() {
    int arr[100], n, i;

    printf("How many numbers? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Product = %d\n", arrayProduct(arr, n));

    return 0;
}

int arrayProduct(int arr[], int size) {
    if (size == 0)
        return 1;

    return arr[size - 1] * arrayProduct(arr, size - 1);
}