#include <stdio.h>
#include <string.h>

void printFrequency(char *str) {
    int freq[256] = {0};  // Array to store the frequency of each character
    int i;

    // Count the frequency of each character
    for (i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;
    }

    // Print the frequency of each character
    for (i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("The frequency of '%c' is %d\n", i, freq[i]);
        }
    }
}

int main() {
    char str[] = "Hello Everyone";

    printFrequency(str);

return 0;
}