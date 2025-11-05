#include <stdint.h>
#include <stdio.h>

uint8_t compress_bits(uint16_t val) {
  uint8_t compressed = 0;
  uint8_t bit = 0;
  for (int i = 0; i < 16; i++) {
    if ((i % 2) == 1) {
      continue;
    }
    bit = (val >> i) & 1;
    if (bit == 1) {
      compressed |= bit << (i / 2);
    }
  }
  return compressed;
}

int main() {
  uint16_t val;
  scanf("%hu", &val);

  uint8_t result = compress_bits(val);
  printf("%u", result);
  return 0;
}
