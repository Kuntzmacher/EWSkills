#include <stdint.h>
#include <stdio.h>

uint32_t rotate_right(uint32_t reg, uint8_t n) {
  uint32_t bit = 0;
  for (int i = 0; i < n; i++) {
    bit = reg & 1;
    reg >>= 1;
    if (bit == 1) {
      reg |= (bit << 31);
    }
  }
  return reg;
}

int main() {
  uint32_t reg;
  uint8_t n;
  scanf("%u %hhu", &reg, &n);
  printf("%u", rotate_right(reg, n));
  return 0;
}
