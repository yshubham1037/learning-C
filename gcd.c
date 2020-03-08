// find GCD nd LCM of two numbers using do while loop

#include <stdio.h>
int main() {
  int p, q, lcm, gcd, m, n, r;
  printf("enter the two numbers\n");
  scanf("%d,%d", &p, &q);
  m = p;
  n = q;
  do {
    r = p % q;
    p = q;
    q = r;
  } while (q != 0);
  {
    gcd = m;
    lcm = (m * n) / gcd;
  }
  printf("the GCD of the numbers is %d\n the LCM of the numbers is %d", gcd,
         lcm);
}