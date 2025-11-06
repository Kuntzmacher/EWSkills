#include <stdint.h>
#include <stdio.h>

// Define macros here

uint16_t build_register(uint8_t enable, uint8_t mode, uint8_t speed) {
  // Use macros to set fields
  uint16_t reg = 0;
  reg |= enable << 0;
  reg |= mode << 1;
  reg |= speed << 3;
  return reg;
}

int main() {
  uint8_t enable, mode, speed;
  scanf("%hhu %hhu %hhu", &enable, &mode, &speed);

  uint16_t reg = build_register(enable, mode, speed);
  printf("%u", reg);
  return 0;
}
