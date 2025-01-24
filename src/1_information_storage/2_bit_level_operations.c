#include <stdio.h>

void inplace_swap(int *x, int *y) {
  *y = *x ^ *y;
  *x = *x ^ *y;
  *y = *x ^ *y;
}

void reverse_array(int a[], int cnt) {
  int first, last;
  for (first = 0, last = cnt - 1; first < last; first++, last--) {
    inplace_swap(&a[first], &a[last]);
  }
}

void main() {
  int x = 1;
  int y = 2;
  inplace_swap(&x, &y);
  printf("x: %d, y: %d \n\n", x, y);

  int arr[] = {1, 2, 3, 4};
  int length = sizeof(arr) / sizeof(arr[0]);
  reverse_array(arr, length);
  for (int i = 0; i < length; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}