#include <stdint.h>
#include <stdio.h>

uint32_t set_baud_rate(uint32_t reg, uint8_t baud) {

  reg &= ~(0xF << 8);
  reg |= baud << 8;

  return reg;
}

int main() {
  uint32_t reg;
  uint8_t baud;
  scanf("%u %hhu", &reg, &baud);
  printf("%u", set_baud_rate(reg, baud));
  return 0;
}
