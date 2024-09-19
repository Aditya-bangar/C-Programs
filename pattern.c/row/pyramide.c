#include <stdio.h>

void printPyramid(int height) {
    for (int i = 0; i < height; i++) {
        // Print spaces before asterisks
        for (int j = 0; j < height - i - 1; j++) {
            printf(" ");
        }
        
        // Print asterisks
        for (int k = 0; k <= i; k++) {
            printf("* ");
        }
        
        printf("\n");
    }
}


int main() {
    int height;
    printf("Enter the height of the pyramid: ");
    scanf("%d", &height);
    
    printPyramid(height);
    
    return 0;
}