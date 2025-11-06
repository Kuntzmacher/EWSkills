#include <stdint.h>
#include <stdio.h>

uint8_t is_bit_set(uint8_t reg, uint8_t pos) {
  // Your code here
  return (reg & (1 << pos)) != 0;
}

int main() {
  uint8_t reg, pos;
  scanf("%hhu %hhu", &reg, &pos);
  printf("%u", is_bit_set(reg, pos));
  return 0;
}
