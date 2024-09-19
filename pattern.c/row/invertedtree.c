#include <stdio.h>

void printInvertedTree(int height) {
    for (int i = height - 1; i >= 0; i--) {
        for (int j = 0; j < height - i - 1; j++) {
            printf(" ");
        }
        for (int k = 0; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
    }
}

int main() {
    int height;
    printf("Enter the height of the tree: ");
    scanf("%d", &height);
    printInvertedTree(height);
    return 0;
}
