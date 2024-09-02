// Program: string_copy_pointers.c

#include <stdio.h>
#include <string.h>

void string_copy(char *dest, char *src) {
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }

    // Add the null terminator
    *dest = '\0';
}

int main() {
    char str1[100], str2[100];

    // Get input from the user
    printf("Enter a string: ");
    scanf("%s", str1);

    // Copy the string
    string_copy(str2, str1);

    // Print the copied string
    printf("Copied string: %s\n", str2);

    return 0;
}