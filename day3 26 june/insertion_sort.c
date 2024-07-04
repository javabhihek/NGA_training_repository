#include <stdio.h>

void InsertionSort(int x[], int n);
void Swap(int *x, int *y);

int main() {
    int a[] = {98, 34, 45, 23};
    int n = sizeof(a) / sizeof(a[0]);
    InsertionSort(a, n);
    
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    return 0;
}

void InsertionSort(int x[], int n) {
    int i, j, key;
    for (i = 1; i < n; i++) {
        key = x[i];
        j = i - 1;
        
        while (j >= 0 && x[j] > key) {
            x[j + 1] = x[j];
            j = j - 1;
        }
        x[j + 1] = key;
    }
}

void Swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
