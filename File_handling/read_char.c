
#include <stdio.h>

void ReadNCharacter(int n) {
    FILE *filept;
    char ch;

    filept = fopen("Amazon.txt", "r");
    if (filept == NULL) {
        printf("Error opening the file.\n");
        return;
    }

    // Read and print 'n' characters
    for (int i = 0; i < n; ++i) {
        ch = fgetc(filept);
        if (ch == EOF) {
            printf("Reached end of file.\n");
            break;
        }
        putchar(ch);
    }

    // Close the file
    fclose(filept);
}

int main() {
    int n;
    printf("Enter the number of characters to read: ");
    scanf("%d", &n);
    ReadNCharacter(n);
    return 0;
}