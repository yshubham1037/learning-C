// sum of squares of n numbers using for loop

#include <stdio.h>
int main() {
  int n, i, sum = 0;
  printf("enter the value of n\n");
  scanf("%d", &n);
  for (i = 1; i <= n; i++) {
    sum = sum + i * i;
  }
  printf("the sum of squares of n numbers is %d", sum);
}