#include <stdio.h>
int main() {
    int arr[5];
    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 4; i++) {
        if (arr[i] == arr[i + 1]) {
            printf("%d and %d are same\n", arr[i], arr[i + 1]);
        }
    }

    return 0;
}