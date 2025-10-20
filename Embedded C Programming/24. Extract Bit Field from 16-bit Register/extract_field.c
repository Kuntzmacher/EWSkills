#include <stdint.h>
#include <stdio.h>

uint8_t extract_field(uint16_t reg) {

  uint8_t extracted = (reg >> 4) & 0b11111;

  return extracted;
}

int main() {
  uint16_t reg;
  scanf("%hx", &reg);
  printf("%u", extract_field(reg));
  return 0;
}
