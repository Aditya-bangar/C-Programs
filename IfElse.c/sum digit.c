#include<stdio.h>

int main() {
    int num, sum, reminder;
    printf("Enter a number to check: ");
    scanf("%d", &num);

    for (; num > 9;) {
        sum = 0;

        for (int duplicate = num; duplicate != 0; duplicate /= 10) {
            reminder = duplicate % 10;
            sum += reminder;
        }

        num = sum;
    }

    printf("\nThe generic number is %d\n", num);

return 0;
}