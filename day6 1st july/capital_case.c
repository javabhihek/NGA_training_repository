#include <stdio.h>
#include <ctype.h>

void to_uppercase(char *str) {
    while (*str) {
        *str = toupper(*str);
        str++;
    }
}

int main() {
    char str1[100], str2[100], str3[100];
    char *strings[3] = { str1, str2, str3 };  // Array of pointers to strings

    // Reading input strings
    printf("Enter three strings separated by spaces: ");
    scanf("%99s %99s %99s", str1, str2, str3);

    // Converting each string to uppercase
    for (int i = 0; i < 3; i++) {
        to_uppercase(strings[i]);
    }

    // Printing the uppercase strings
    printf("Uppercase Strings: %s, %s, %s\n", str1, str2, str3);

    return 0;
}
