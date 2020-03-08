// to check whether given number is a pallinderome or not using while loop

#include <stdio.h>
int main() {
  int n, rev = 0, r, num;
  printf("enter the number \n");
  scanf("%d", &n);

  num = n;
  while (n != 0) {
    r = n % 10;
    rev = rev * 10 + r;
    n = n / 10;
  }

  if (num == rev) {
    printf("the number is a pallinderome\n");
  } else
    printf("the number is not a pallinderome\n");
}