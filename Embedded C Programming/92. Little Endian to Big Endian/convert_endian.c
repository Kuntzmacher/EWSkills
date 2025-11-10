#include <stdint.h>
#include <stdio.h>

uint32_t convert_endian(uint32_t value) {
  // Write logic to swap bytes
  uint32_t byte0 = (value & 0x000000FF) << 24;
  uint32_t byte1 = (value & 0x0000FF00) << 8;
  uint32_t byte2 = (value & 0x00FF0000) >> 8;
  uint32_t byte3 = (value & 0xFF000000) >> 24;
  return byte0 | byte1 | byte2 | byte3;
}

int main() {
  uint32_t val;
  scanf("%u", &val);
  printf("%u", convert_endian(val));
  return 0;
}
