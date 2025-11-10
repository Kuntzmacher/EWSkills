#include <stdint.h>
#include <stdio.h>

void subtract_with_underflow(uint8_t a, uint8_t b, uint8_t *diff,
                             uint8_t *carry) {
  // Write logic here
  *diff = a - b;

  *carry = (b > a) ? 1 : 0;
}

int main() {
  uint8_t a, b, diff, carry;
  scanf("%hhu %hhu", &a, &b);
  subtract_with_underflow(a, b, &diff, &carry);
  printf("diff = %u, carry = %u", diff, carry);
  return 0;
}
