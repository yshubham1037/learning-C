// find sum of odd and even numbers upto n using for loop

#include <stdio.h>
int main() {
  int n, o = 0, e = 0, i, j;
  printf("enter the value of n\n");
  scanf("%d", &n);
  for (i = 1; i <= n; i = i + 2) {
    o = o + i;
  }
  printf("the sum of the odd numbers=%d\n", o);

  for (j = 2; j <= n; j = j + 2) {

    e = e + j;
  }
  printf("the sum of the even numbers=%d", e);
}