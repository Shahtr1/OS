#include <stdio.h>

// This sets bits in x to 1 wherever the mask m has 1.
int bis(int x, int m) {
  return x | m;
}

// This clears bits in x (sets them to 0) wherever the mask m has 1.
int bic(int x, int m) {
  int negate_m = ~m;
  return x & ~m;
}

int bool_or(int x, int y) {
  return bis(x, y);
}

// x⊕y = bis(x, y) ∧ ¬bic(x, ∼y)
int bool_xor(int x, int y) {
  int union_xy = bis(x, y);           // Compute x | y
  int intersect_xy = bic(x, ~y);      // Compute x & y
  return bic(union_xy, intersect_xy); // XOR = union - intersection
}

int main() {
  int x = 6;
  int y = 12;
  printf("x: %d, y: %d \n", x, y);
  //   printf("x | y: %d \n", bool_or(x, y));
  printf("x ⊕ y: %d \n", bool_xor(x, y));
}