#include <stdio.h>

void BubbleSort(int x[], int n);  // Using BubbleSort to sort the array
void Swap(int *x, int *y);
int BinarySearch(int x[], int n, int key);

int main() {
    int a[] = {45, 23, 34};
    int n = sizeof(a) / sizeof(a[0]);
    
    BubbleSort(a, n);  // Sort the array first
    int key = 34;
    int result = BinarySearch(a, n, key);
    
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");
    
    return 0;
}

void BubbleSort(int x[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (x[j] > x[j + 1]) {
                Swap(&x[j], &x[j + 1]);
            }
        }
    }
}

void Swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int BinarySearch(int x[], int n, int key) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (x[mid] == key)
            return mid;
        if (x[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}
