/* to read the marks obtained by n students in m subjects and find the total of
 * each student */

#include <stdio.h>
int main() {
  int n, m, total, marks, rollno, i, j;
  printf("enter the value of m and n \n");
  scanf("%d%d", &m, &n);
  for (i = 1; i <= n; i++) {
    printf("enter the roll number of the student \n");
    scanf("%d", &rollno);
    total = 0;
    printf("enter the marks obtained by the student in each subject \n");

    for (j = 1; j <= m; j++) {

      scanf("%d", &marks) total = total + marks;
    }
    printf("total marks obtained by the student is %d \n", total);

    if (total >= 250)
      printf("first division\n");
    else if (total >= 200 && total < 250)
      printf("second division\n");
    else
      printf("third division \n");
  }
}