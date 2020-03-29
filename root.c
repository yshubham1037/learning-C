/*to find the square root of a series of numbers and type 999 to exit */

#include <math.h>
#include <stdio.h>
int main() {
  int x, i, negative, count;
  float y;
  printf("enter 999 to exit \n");

  count = 0;
  negative = 0;

  while (count <= 100) {
    printf("enter the number : ");
    scanf("%d", &x);

    if (x == 999)
      goto end;

    else if (x < 0) {
      printf("number is negative \n");
      negative++;
      continue;
    }

    y = sqrt(x);
    printf("%f \n", y);
    count++;
  }
end:
  printf("end of data \n");
  printf("the number of items done=%d \n", count);
  printf("the number of negative numbers= %d \n", negative);
}
