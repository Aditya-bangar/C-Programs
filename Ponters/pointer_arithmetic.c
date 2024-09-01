#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    printf("Element at index 0: %d\n", *ptr);
    printf("Element at index 2: %d\n", *(ptr + 2));
    ptr++;
    printf("Element pointed to by ptr after increment: %d\n", *ptr);

    return 0;
}