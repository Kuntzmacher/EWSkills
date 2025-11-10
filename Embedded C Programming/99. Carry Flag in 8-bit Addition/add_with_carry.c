#include <stdint.h>
#include <stdio.h>

void add_with_carry(uint8_t a, uint8_t b, uint8_t *result, uint8_t *carry) {
  // Your logic here
  *result = a + b;

  if ((a == 255 && b > 0) || (a > 0 && b == 255)) {
    *carry = 1;
    return;
  }

  if ((a / 2 + b / 2) >= 256 / 2) {
    *carry = 1;
  } else {
    *carry = 0;
  }
}

int main() {
  uint8_t a, b, result, carry;
  scanf("%hhu %hhu", &a, &b);

  add_with_carry(a, b, &result, &carry);

  printf("%u ", result);
  printf("%u", carry);
  return 0;
}
