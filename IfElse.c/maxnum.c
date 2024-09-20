#include <stdio.h>
int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    int max = (x > y) ? x : y;
    printf("Maximum number: %d\n", max);

    return 0;
}
