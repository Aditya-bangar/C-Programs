#include <stdio.h>

// Find the sum of all elements in an array
int sum(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Sum of array elements: %d\n", sum(arr, size));

    return 0;
}
