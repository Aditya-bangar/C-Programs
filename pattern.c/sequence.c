

#include <stdio.h>

int main() {
    int arr[5];
    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    int max_count = 0, current_count = 1;
    for (int i = 0; i < 4; i++) {
        if (arr[i] == arr[i + 1]) {
            current_count++;
        } else {
            if (current_count > max_count) {
                max_count = current_count;
            }
            current_count = 1;
        }
    }

    if (current_count > max_count) {
        max_count = current_count;
    }

    printf("Longest sequence of same numbers: %d\n", max_count);

    return 0;
}
