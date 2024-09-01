#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

void performOperation(int a, int b, int (*operation)(int, int)) {
    int result = operation(a, b);
    printf("Result: %d\n", result);
}

int main() {
    performOperation(10, 5, add);
    performOperation(20, 7, subtract);

    return 0;
}