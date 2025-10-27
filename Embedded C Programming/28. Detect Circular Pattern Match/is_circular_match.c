#include <stdint.h>
#include <stdio.h>

uint8_t is_circular_match(uint16_t reg, uint16_t target) {
  uint32_t bit = 0;
  for (int i = 0; i < 16; i++) {
    if (reg == target) {
      return 1;
    }
    bit = reg & 1;
    reg >>= 1;
    if (bit == 1) {
      reg |= (bit << 15);
    }
  }
  return 0;
}

int main() {
  uint16_t reg, target;
  scanf("%hu %hu", &reg, &target);
  printf("%hhu", is_circular_match(reg, target));
  return 0;
}
