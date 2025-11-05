#include <stdint.h>
#include <stdio.h>

uint32_t update_register(uint32_t reg) {

  uint32_t extracted = (reg >> 10) & 0b11111;

  if (extracted < 31) { extracted++; }

  reg &= ~(0b11111 << 10);
  reg |= extracted << 10;

  return reg;
}

int main() {
  uint32_t reg;
  scanf("%u", &reg);
  uint32_t updated = update_register(reg);
  printf("%u", updated);
  return 0;
}
