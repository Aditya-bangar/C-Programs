#include <stdio.h>

int main() {
    int color;

    printf("Enter traffic light color (1-Red, 2-Yellow, 3-Green): ");
    scanf("%d", &color);

    if (color == 1) {
        printf("Stop!\n");
    } else if (color == 2) {
        printf("Caution!\n");
    } else if (color == 3) {
        printf("Go!\n");
    } else {
        printf("Invalid input.\n");
    }

    return 0;
}
