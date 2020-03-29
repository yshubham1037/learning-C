// to find avg of a list of +ve numbers and use of break by entering a -ve
// number

#include <stdio.h>
int main() {
  int n, i, sum;
  float avg;
  printf("enter the values one by one \n");
  sum = 0;
  for (i = 1; i <= 1000; i++) {
    scanf("%d", &n);
    if (n < 0)
      break;
    else
      sum = sum + n;
  }
  avg = sum / (i - 1);
  printf("the average of the numbers is %f", avg);
}