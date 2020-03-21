// sum of odd and even numbers upto a number n by second method

#include <stdio.h>
int main() {
  int i, n, os = 0, es = 0;
  printf("enter the number \n");
  scanf("%d", &n);
  for (i = 1; i <= n; i++) {
    if (i % 2 == 0) {

      es = es + i;
    } else
      os = os + i;
  }
  printf("the sum of odd numbers is %d and sum of the even numbers is %d\n", os,
         es);
}