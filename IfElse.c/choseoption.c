
#include <stdio.h>

int main() {
    int choice;
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("You chose option 1.\n");
            break;
        case 2:
            printf("You chose option 2.\n");
            break;
        case 3:
            printf("You chose option 3.\n");
            break;
        case 4:
            printf("You chose option 4.\n");
            break;
        case 5:
            printf("You chose option 5.\n");
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}
