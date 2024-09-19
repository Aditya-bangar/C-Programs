
#include <stdio.h>

void printBinaryTree(int height) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < height - i - 1; j++) {
            printf(" ");
        }
        printf("*");
        for (int k = 0; k < i; k++) {
            printf(" *");
        }
        printf("\n");
    }
}

int main() {
    int height;
    printf("Enter the height of the tree: ");
    scanf("%d", &height);
    printBinaryTree(height);
    return 0;
}
