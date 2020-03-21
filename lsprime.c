\]902// to find and list all the prime numbers upto a number n

#include <stdio.h>
int main() {
  int n, i, j, temp;
  printf("enter the number \n");
  scanf("%d", &n);
  for (i = 2; i <= n; i++) {
    temp = 0;

    for (j = 2; j <= i / 2; j++) {
      if (i % j == 0) {

        temp = 1;
        break;
      }
    }

    if (temp == 0)

      printf("%d\n", i);
  }
}
