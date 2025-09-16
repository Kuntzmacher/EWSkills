#include <stdint.h>
#include <stdio.h>

// Define bitwise macros here

uint8_t modify_register(uint8_t reg) {
  // Apply operations in order
  reg |= 1 << 2;
  reg |= 1 << 7;
  reg &= ~(1 << 3);
  reg ^= 1 << 5;
  return reg;
}

int main() {
  uint8_t reg;
  scanf("%hhu", &reg);
  printf("%u", modify_register(reg));
  return 0;
}
