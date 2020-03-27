#include <stdio.h>
int main() {
  int row, col, rowmax = 10, colmax = 12, y;
  printf("multiplication table\n");
  for (row = 1; row <= rowmax; row++) {
    for (col = 1; col <= colmax; col++) {
      y = row * col;
      printf("%d\t", y);
    }
    printf("\n");
  }
}