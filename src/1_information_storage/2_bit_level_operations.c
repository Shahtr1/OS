#include <stdio.h>

void inplace_swap(int *x, int *y) {
  *y = *x ^ *y;
  *x = *x ^ *y;
  *y = *x ^ *y;
}

void main() {
  int x = 1;
  int y = 2;
  inplace_swap(&x, &y);
  printf("x: %d, y: %d", x, y);
}