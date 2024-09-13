// Program: find_max_in_dynamic_array.c

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *arr, max;

    // Prompt the user for the array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate the array
    arr = (int *)malloc(n * sizeof(int));

    // Check if allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input elements into the array
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find the maximum element using a pointer
    max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Print the maximum element
    printf("Maximum element: %d\n", max);

    // Free the allocated memory
    free(arr);

    return 0;
}