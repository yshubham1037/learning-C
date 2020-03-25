// to evaluate the equation y=x^n

#include <stdio.h>
int main() {
  int y, x, n, count;
  printf("enter the value of x and n \n");
  scanf("%d%d", &x, &n);
  count = 1;
  y = 1;
  while (count <= n) {
    y = y * x;
    count = count + 1;
  }

  printf("the solution of the equation is %d", y);
}