//Allen Bernard R. Aurellano BSCS-1A

#include <stdio.h>
#define MAX 200

int countPeaks(const int a[], int n);
int countValleys(const int a[], int n);
int arraySum(const int a[], int n);
int arrayMax(const int a[], int n);
int arrayMin(const int a[], int n);

int main() 
{
    FILE *ifp;
    int n;
    int arr[MAX];

    ifp = fopen("input.txt", "rt");

    fscanf(ifp, "%d", &n);

    for (int i = 0; i < n; i++) {
        fscanf(ifp, "%d", &arr[i]);
    }

    fclose(ifp);

    printf("Values read from \"input.txt\":\n");
    printf("     ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    printf("Peaks: %d\n", countPeaks(arr, n));
    printf("Valleys: %d\n", countValleys(arr, n));
    printf("Sum: %d\n", arraySum(arr, n));
    printf("Highest: %d\n", arrayMax(arr, n));
    printf("Lowest: %d\n", arrayMin(arr, n));

    return 0;
}

int countPeaks(const int a[], int n) {
    int i, count = 0;
    for (i = 1; i <= n - 2; i++) {
        if (a[i] > a[i - 1] && a[i] > a[i + 1]) {
            count++;
        }
    }
    return count;
}

int countValleys(const int a[], int n) {
    int i, count = 0;
    for (i = 1; i <= n - 2; i++) {
        if (a[i] < a[i - 1] && a[i] < a[i + 1]) {
            count++;
        }
    }
    return count;
}

int arraySum(const int a[], int n) {
    int i, sum = 0;
    for (i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum;
}

int arrayMax(const int a[], int n) {
    int i, max = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;
}

int arrayMin(const int a[], int n) {
    int i, min = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
        }
    }
    return min;
}