#include <stdio.h>

void SelectionSort(int x[], int n);
void Swap(int *x, int *y);

int main() {
    int a[] = {23, 34, 45};
    int n = sizeof(a) / sizeof(a[0]);
    SelectionSort(a, n);
    
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    return 0;
}

void SelectionSort(int x[], int n) {
    int min_idx;
    for (int i = 0; i < n - 1; i++) {
        min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (x[j] < x[min_idx]) {
                min_idx = j;
            }
        }
        Swap(&x[min_idx], &x[i]);
    }
}

void Swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
