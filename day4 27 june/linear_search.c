#include <stdio.h>

int LinearSearch(int x[], int n, int key);

int main() {
    int a[] = {23, 34, 45};
    int n = sizeof(a) / sizeof(a[0]);
    int key = 34;
    int result = LinearSearch(a, n, key);
    
    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");
    
    return 0;
}

int LinearSearch(int x[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (x[i] == key) {
            return i;
        }
    }
    return -1;
}
