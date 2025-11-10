#include <stdint.h>
#include <stdio.h>

int16_t signed_unsigned_sum(int8_t a, uint8_t b) {
  // Your logic here
  if (a < 0) {
    a *= -1;
    return b - (uint8_t)a;
  }

  return (uint8_t)a + b;
}

int main() {
  int8_t a;
  uint8_t b;
  scanf("%hhd %hhu", &a, &b);
  printf("%d", signed_unsigned_sum(a, b));
  return 0;
}
