// sum of odd nubers and even numbers upto a number n using while loop

#include <stdio.h>
int main() {
  int i, n, os = 0, es = 0;
  printf("enter the number \n");
  scanf("%d", &n);
  i = 0;
  while (i <= n) {
    if (i % 2 == 0) {
      es = es + i;
    } else
      os = os + i;

    i++;
  }

  printf("the sum of the odd numbers is %d \n the sum of even numbers is %d",
         os, es);
}