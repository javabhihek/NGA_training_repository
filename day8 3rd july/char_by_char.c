#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void writeStringToFile(const char *filename, const char *str) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        perror("Failed to open file");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; str[i] != '\0'; i++) {
        fputc(str[i], file);
    }

    fclose(file);
}

void cpyFileCharByChar(const char *sourceFile, const char *destinationFile) {
    FILE *source = fopen(sourceFile, "r");
    if (source == NULL) {
        perror("Failed to open source file");
        exit(EXIT_FAILURE);
    }

    FILE *dest = fopen(destinationFile, "w");
    if (dest == NULL) {
        perror("Failed to open destination file");
        fclose(source);
        exit(EXIT_FAILURE);
    }

    int ch;
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, dest);
    }

    fclose(source);
    fclose(dest);
}

int main() {
    char inputString[100];

    printf("Enter a string with spaces: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Remove newline character from the end of inputString
    size_t len = strlen(inputString);
    if (len > 0 && inputString[len - 1] == '\n') {
        inputString[len - 1] = '\0';
    }

    const char *firstFile = "file1.txt";
    const char *secondFile = "file2.txt";

    writeStringToFile(firstFile, inputString);
    cpyFileCharByChar(firstFile, secondFile);

    printf("Content copied from %s to %s successfully.\n", firstFile, secondFile);

    return 0;
}
