// find the factorial of a number using for loop

#include <stdio.h>
int main() {
  int n, i, fact = 1;
  printf("enter the number \n");
  scanf("%d", &n);
  for (i = 1; i <= n; i++) {
    fact = fact * i;
  }
  printf("the factorial of the number=%d", fact);
}
