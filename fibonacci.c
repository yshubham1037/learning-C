// to print nth fibonacci

#include <stdio.h>
int main() {
  int num1 = 0, num2 = 1, n, i, fib;
  printf("enter the value of n \n");
  scanf("%d", &n);
  printf("%d\t%d", num1, num2);
  for (i = 1; i <= n; i++) {
    fib = num1 + num2;
    num1 = num2;
    num2 = fib;
    printf("\t%d", fib);
  }
}