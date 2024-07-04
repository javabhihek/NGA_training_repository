#include <stdio.h>
#include <string.h>

int IsPalindrome(char *s) {
    char *start = s;
    char *end = s + strlen(s) - 1;

    while (start < end) {
        if (*start != *end) {
            return 0;  // Not a palindrome
        }
        start++;
        end--;
    }
    return 1;  // Is a palindrome
}

int main() {
    char myStr[100];  // Assuming the maximum input length is 99 characters

    printf("Enter a string: ");
    scanf("%99s", myStr);  // Read input from the user

    int result = IsPalindrome(myStr);
    if (result == 1) {
        printf("Yes, it is a palindrome.\n");
    } else {
        printf("No, it is not a palindrome.\n");
    }

    return 0;
}
