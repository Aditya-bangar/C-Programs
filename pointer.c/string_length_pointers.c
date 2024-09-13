// Program: string_length_pointers.c

#include <stdio.h>

int string_length(char *str) {
    int length = 0;

    // Iterate until the null terminator is reached
    while (*str != '\0') {
        length++;
        str++;
    }

    return length;
}

int main() {
    char str[100];

    // Get input from the user
    printf("Enter a string: ");
    scanf("%s", str);

    // Find the length of the string
    int length = string_length(str);

    // Print the length
    printf("Length of the string: %d\n", length);

    return 0;
}