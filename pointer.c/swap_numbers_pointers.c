// Program: swap_numbers_pointers.c

#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;

    // Get input from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Swap the numbers using pointers
    swap(&a, &b);

    // Print the swapped numbers
    printf("Swapped numbers: a = %d, b = %d\n", a, b);

    return 0;
}