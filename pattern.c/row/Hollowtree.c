#include <stdio.h>

void printHollowTree(int height) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < height - i - 1; j++) {
            printf(" ");
        }
        for (int k = 0; k <= i; k++) {
            if (k == 0 || k == i || i == height - 1) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

int main() {
    int height;
    printf("Enter the height of the tree: ");
    scanf("%d", &height);
    printHollowTree(height);
    return 0;
}
