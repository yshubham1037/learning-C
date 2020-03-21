// to find and print the prime numbers between a given range

#include <stdio.h>
int main() {
  int n1, n2, i, j, temp;
  printf("enter the range\n");
  scanf("%d%d", &n1, &n2);
  for (i = n1; i <= n2; i++) {
    temp = 0;
    for (j = 2; j <= i / 2; j++)
      if (i % j == 0) {
        temp = 1;
      }
    if (temp == 0) {
      printf("%d\n", i);
    }
  }
}