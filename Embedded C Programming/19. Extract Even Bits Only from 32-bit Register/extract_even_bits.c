#include <stdint.h>
#include <stdio.h>

uint32_t extract_even_bits(uint32_t reg) {

  uint8_t bit = 0;
  uint32_t new_reg = 0;

  for (int i = 30; i >= 0; i -= 2) {
    bit = (reg >> i) & 1U;
    new_reg <<= 1;
    new_reg |= bit;
  }

  return new_reg;
}

int main() {
  uint32_t reg;
  scanf("%u", &reg);
  printf("%u", extract_even_bits(reg));
  return 0;
}
