
#include <stdio.h>

int main() {
    int age, income;
    printf("Enter your age and income: ");
    scanf("%d %d", &age, &income);

    if (age >= 25) {
        if (income >= 50000) {
            printf("You are eligible for loan.\n");
        } else {
            printf("Your income is too low.\n");
        }
    } else {
        printf("You are too young.\n");
    }

    return 0;
}