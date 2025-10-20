#include <stdint.h>
#include <stdio.h>

uint16_t pack_register(uint8_t mode, uint8_t speed, uint8_t status) {

  uint16_t reg = 0u;
  reg |= mode;
  reg |= speed << 3;
  reg |= status << 10;

  return reg;
}

int main() {
  uint8_t mode, speed, status;
  scanf("%hhu %hhu %hhu", &mode, &speed, &status);

  uint16_t reg = pack_register(mode, speed, status);
  printf("%u", reg);
  return 0;
}
