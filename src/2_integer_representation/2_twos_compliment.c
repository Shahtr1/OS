#include <stdio.h>

void show_bytes(unsigned char *start, size_t len) {
  for (size_t i = 0; i < len; i++)
    printf("%02x ", start[i]);
  printf("\n");
}

int main() {
  short x = 12345; // Decimal value 12345
  short mx = -x;   // Two's complement representation of -12345

  printf("x = %d\n", x);
  printf("mx = %d\n", mx);

  printf("x (hex): ");
  show_bytes((unsigned char *)&x, sizeof(short));

  printf("mx (hex): ");
  show_bytes((unsigned char *)&mx, sizeof(short));

  return 0;
}
