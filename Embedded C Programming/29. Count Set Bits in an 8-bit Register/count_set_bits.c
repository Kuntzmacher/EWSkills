#include <stdint.h>
#include <stdio.h>

uint8_t count_set_bits(uint8_t reg) {
  uint8_t count = 0;
  for (int i = 0; i < 8; i++) {
    if ((reg & 1) == 1) {
      count++;
    }
    reg >>= 1;
  }
  return count;
}

int main() {
  uint8_t reg;
  scanf("%hhu", &reg);
  printf("%u", count_set_bits(reg));
  return 0;
}
