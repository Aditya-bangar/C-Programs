#include <stdio.h>

int main() {
    // Define an integer array
    int numbers[] = {1, 2, 3, 4, 5};
    int length = sizeof(numbers) / sizeof(numbers[0]); // Calculate the number of elements

    // Print the array elements
    printf("Integer Array:\n");
    for (int i = 0; i < length; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
