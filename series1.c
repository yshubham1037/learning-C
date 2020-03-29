// to evaluate the series 1/(1-x)=1+x+x^2+x^3+....x^n for 0.01 accuracy

#define loop 100
#define accuracy 0.01
#include <stdio.h>
int main() {
  float sum, term, x;
  int n;
  printf("input value of x: ");
  scanf("%f", &x);
  sum = 0;
  for (n = 1, term = 1; n <= loop; n++) {
    sum = sum + term;
    if (term <= accuracy)
      goto output;
    term = term * x;
  }
  printf("value of n is not sufficient \n");
  goto end;
output:
  printf("end of loop\n");
  printf("sum=%f, no of terms = %d \n", sum, n);
end:;
}