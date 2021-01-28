#include <stdio.h>

int main () {
  //khai báo biến n
  int n;
  //nhập n từ bàn phím
  printf ("nhap n = ");
  scanf ("%d", &n);
  //tổng S
  int tinh = 0;
  printf ("S = 0");
  for (int a = 1; a <= n; a++) {
    tinh += a;
    // tinh = tinh + a
    printf (" + %d ", a);
  }
  printf ("= %d", tinh);
  return 0;
}
