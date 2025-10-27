#include <stdint.h>
#include <stdio.h>

uint8_t rotate_left(uint8_t reg, uint8_t n) {
  uint8_t bit = 0;
  uint8_t mask = 0b10000000;
  for (int i = 0; i < n; i++) {
    bit = (reg & mask) >> 7;
    reg <<= 1;
    if (bit == 1) {
      reg |= 1;
    }
  }
  return reg;
}

int main() {
  uint8_t reg, n;
  scanf("%hhu %hhu", &reg, &n);
  printf("%u", rotate_left(reg, n));
  return 0;
}
