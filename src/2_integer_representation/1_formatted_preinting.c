#include <inttypes.h> // Include this for PRId32 and PRIu64
#include <stdio.h>

int main() {
  int32_t x = 5;   // Use int32_t if you want PRId32
  uint64_t y = 10; // Use uint64_t if you want PRIu64

  printf("x = %" PRId32 ", y = %" PRIu64 "\n", x, y);
  printf("x = %d, y = %lu\n", x, y); //  without header

  return 0;
}
