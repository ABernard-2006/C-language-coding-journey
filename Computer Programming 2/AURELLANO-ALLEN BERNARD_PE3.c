//Allen Bernard R. Aurellano BSCS - 1A

#include <stdio.h>
#define MAX 100

void print_array(int a[], int n);
void selection_sort(int a[], int n);
void insertion_sort(int a[], int n);
void bubble_sort(int a[], int n);
void merge_sort(int a[], int left, int right, int n);
void merge(int a[], int left, int mid, int right, int n);

int main() {
    int n, choice, i;
    int arr[MAX];

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Which sorting algorithm do you want to use?\n");
    printf("  1. SELECTION SORT\n");
    printf("  2. INSERTION SORT\n");
    printf("  3. BUBBLE SORT\n");
    printf("  4. MERGE SORT\n");
    printf("  Type number of choice: ");
    scanf("%d", &choice);

    printf("\n");

    switch(choice) {
        case 1:
            printf("Output of SELECTION Sort:\n");
            selection_sort(arr, n);
            break;

        case 2:
            printf("Output of INSERTION Sort:\n");
            insertion_sort(arr, n);
            break;

        case 3:
            printf("Output of BUBBLE Sort:\n");
            bubble_sort(arr, n);
            break;

        case 4:
            printf("Output of MERGE Sort:\n");
            merge_sort(arr, 0, n - 1, n);
            break;

        default:
            printf("Invalid choice.\n");
            return 1;
    }

    printf("\nSorted Array: ");
    print_array(arr, n);

    return 0;
}

void print_array(int a[], int n) {
    int i;
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

void selection_sort(int a[], int n) {
    int i, j, min, temp;

    for(i = 0; i < n - 1; i++) {
        min = i;
        for(j = i + 1; j < n; j++) {
            if(a[j] < a[min])
                min = j;
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;

        printf("i=%d: ", i);
        print_array(a, n);
    }
}

void insertion_sort(int a[], int n) {
    int i, j, key;

    for(i = 1; i < n; i++) {
        key = a[i];
        j = i - 1;

        while(j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;

        printf("i=%d: ", i);
        print_array(a, n);
    }
}

void bubble_sort(int a[], int n) {
    int i, j, temp;

    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
        printf("Pass %d: ", i + 1);
        print_array(a, n);
    }
}

void merge_sort(int a[], int left, int right, int n) {
    if(left < right) {
        int mid = (left + right) / 2;

        merge_sort(a, left, mid, n);
        merge_sort(a, mid + 1, right, n);
        merge(a, left, mid, right, n);
        print_array(a, n);
    }
}

void merge(int a[], int left, int mid, int right, int n) {
    int i, j, k;
    int temp[MAX];

    i = left;
    j = mid + 1;
    k = left;

    while(i <= mid && j <= right) {
        if(a[i] <= a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }

    while(i <= mid)
        temp[k++] = a[i++];

    while(j <= right)
        temp[k++] = a[j++];

    for(i = left; i <= right; i++)
        a[i] = temp[i];
}