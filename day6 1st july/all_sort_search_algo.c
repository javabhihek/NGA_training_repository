#include <stdio.h>

// Function prototypes
void bubbleSort(int *arr, int n);
void selectionSort(int *arr, int n);
void insertionSort(int *arr, int n);
int linearSearch(int *arr, int n, int x);
int binarySearch(int *arr, int n, int x);
void printArray(int *arr, int n);

// Main function
int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \n");
    printArray(arr, n);

    // Sorting the array using Bubble Sort
    bubbleSort(arr, n);
    printf("Sorted array using Bubble Sort: \n");
    printArray(arr, n);

    // Searching for an element using Linear Search
    int x = 22;
    int result = linearSearch(arr, n, x);
    if (result == -1) {
        printf("Element %d is not present in the array\n", x);
    } else {
        printf("Element %d is present at index %d\n", x, result);
    }

    // Searching for an element using Binary Search
    x = 25;
    result = binarySearch(arr, n, x);
    if (result == -1) {
        printf("Element %d is not present in the array\n", x);
    } else {
        printf("Element %d is present at index %d\n", x, result);
    }

    return 0;
}

// Bubble Sort function
void bubbleSort(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

// Selection Sort function
void selectionSort(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (*(arr + j) < *(arr + min_idx)) {
                min_idx = j;
            }
        }
        int temp = *(arr + min_idx);
        *(arr + min_idx) = *(arr + i);
        *(arr + i) = temp;
    }
}

// Insertion Sort function
void insertionSort(int *arr, int n) {
    for (int i = 1; i < n; i++) {
        int key = *(arr + i);
        int j = i - 1;
        while (j >= 0 && *(arr + j) > key) {
            *(arr + j + 1) = *(arr + j);
            j--;
        }
        *(arr + j + 1) = key;
    }
}

// Linear Search function
int linearSearch(int *arr, int n, int x) {
    for (int i = 0; i < n; i++) {
        if (*(arr + i) == x) {
            return i;
        }
    }
    return -1;
}

// Binary Search function
int binarySearch(int *arr, int n, int x) {
    int l = 0;
    int r = n - 1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (*(arr + m) == x) {
            return m;
        }
        if (*(arr + m) < x) {
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    return -1;
}

// Function to print an array
void printArray(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}
