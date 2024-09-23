#include <stdio.h>
int main() {
    int pin, enteredPin;

    printf("Enter your PIN: ");
    scanf("%d", &pin);

    printf("Re-enter your PIN: ");
    scanf("%d", &enteredPin);

    if (pin == enteredPin) {
        printf("Access granted!\n");
    } else {
        printf("Incorrect PIN. Try again.\n");
    }

    return 0;
}
