#include <stdio.h>

void BubbleSort(int x[], int n);
void Swap(int *x, int *y);

int main() {
    int a[] = {23, 34, 45};
    int n = sizeof(a) / sizeof(a[0]);
    BubbleSort(a, n);
    
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    
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