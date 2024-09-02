// Program: reverse_string_pointers.c

#include <stdio.h>
#include <string.h>

void reverse_string(char *str) {
    int length = strlen(str);
    char temp;

    // Swap characters from both ends until the middle
    for (int i = 0, j = length - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[100];

    // Get input from the user
    printf("Enter a string: ");
    scanf("%s", str);

    // Reverse the string using pointers
    reverse_string(str);

    // Print the reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}