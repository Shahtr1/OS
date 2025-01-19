#include <stdio.h>

typedef unsigned char *bytePointer;

void showBytes(bytePointer start, size_t len) {
  int i;
  for (i = 0; i < len; i++)
    printf(" %.2x", start[i]);
  printf("\n");
}

void showInt(int x) {
  showBytes((bytePointer)&x, sizeof(int));
}

void showFloat(float x) {
  showBytes((bytePointer)&x, sizeof(float));
}

void showPointer(void *x) {
  showBytes((bytePointer)&x, sizeof(void *));
}

void testShowBytes(int val) {
  int ival = val;
  float fval = (float)ival;
  int *pval = &ival;

  showInt(ival);
  showFloat(fval);
  showPointer(pval);
}

void main() {
  testShowBytes(12345);
}