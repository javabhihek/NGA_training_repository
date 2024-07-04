#include <stdio.h>
#include <ctype.h>

int main() {
    char asciiArray[95];
    int index = 0;

    for (int i = 32; i <= 126; i++) {
        asciiArray[index++] = (char)i;
    }

    // Print each character with its category
    for (int i = 0; i < 95; i++) {
        char ch = asciiArray[i];
        printf("Character: %c, ASCII Code: %d, ", ch, ch);

        // Determine the category
        if (islower(ch)) {
            printf("Category: Alphabet, small case letter\n");
        } else if (isupper(ch)) {
            printf("Category: Alphabet, capital case letter\n");
        } else if (isdigit(ch)) {
            printf("Category: Numerical Digit\n");
        } else {
            printf("Category: General Printable Character\n");
        }
    }

    return 0;
}
