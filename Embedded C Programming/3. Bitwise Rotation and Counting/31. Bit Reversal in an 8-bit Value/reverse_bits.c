#include <stdint.h>
#include <stdio.h>

uint8_t switch_bit(uint8_t val, uint8_t bit, uint8_t place) {
  if (bit == 0) {
    val &= ~(1 << place);
  } else if (bit == 1) {
    val |= 1 << place;
  }
  return val;
}

uint8_t reverse_bits(uint8_t val) {
  uint8_t right = 0;
  uint8_t left = 0;
  for (int i = 0; i < 4; i++) {
    right = (val >> i) & 1;
    left = (val >> (7 - i)) & 1;
    val = switch_bit(val, right, 7 - i);
    val = switch_bit(val, left, i);
  }
  return val;
}

int main() {
  uint8_t val;
  scanf("%hhu", &val);

  uint8_t result = reverse_bits(val);
  printf("%u", result);
  return 0;
}
