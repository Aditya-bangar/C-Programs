#include <stdio.h>

// Generate the first n Fibonacci numbers
void fibonacci(int n) {
    int a = 0, b = 1, c;

    if (n <= 0) return;
    printf("Fibonacci series: %d", a);
    for (int i = 1; i < n; i++) {
        printf(", %d", b);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
}

int main() {
    int num;

    printf("Enter the number of Fibonacci numbers to generate: ");
    scanf("%d", &num);

    fibonacci(num);

    return 0;
}
