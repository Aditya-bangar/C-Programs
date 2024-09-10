#include <stdio.h>
int main() {
  int t1 = 0, t2 = 1, nextNum = 0, n;
  printf("Enter a positive number: ");
  scanf("%d", &n);

  printf("Fibonacci Series: %d, %d, ", t1, t2);
  nextNum = t1 + t2;

  while (nextNum <= n) {
    printf("%d, ", nextNum);
    t1 = t2;
    t2 = nextNum;
    nextNum = t1 + t2;
  }

return 0;
}