#include <stdio.h>
int main() {
  int ch;
  printf("enter your choice: \n 1 \n 2 \n 3 \n 4 \n 5 \n 6 \n 7 \n 8 \n 9 \n "
         "10 \n 11 \n 12 \n");
  scanf("%d", &ch);
  switch (ch) {
  case 1:
    printf("the month is january and next month is feburary");
    break;
  case 2:
    printf("the month is feburary and next month is march");
    break;
  case 3:
    printf("the month is march and next month is april");
    break;
  case 4:
    printf("the month is april and next month is may");
    break;
  case 5:
    printf("the month is may and next month is june");
    break;
  case 6:
    printf("the month is june and next month is july");
    break;
  case 7:
    printf("the month is july and next month is august");
    break;
  case 8:
    printf("the month is august and next month is sptember");
    break;
  case 9:
    printf("the month is september and next month is october");
    break;
  case 10:
    printf("the month is october and next month is novenmer");
    break;
  case 11:
    printf("the month is november and the next month is december");
    break;
  case 12:
    printf("the month is december and the next month is january");
    break;
  default:
    printf("invalid data");
    break;
  }
}
