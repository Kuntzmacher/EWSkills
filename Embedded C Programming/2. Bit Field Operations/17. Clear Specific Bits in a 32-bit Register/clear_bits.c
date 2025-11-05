#include <stdint.h>
#include <stdio.h>

uint32_t clear_bits(uint32_t reg, uint8_t pos, uint8_t len) {

  if (len == 0) {
    return reg;
  }

  uint32_t clear = 0b1;

  for (int i = 1; i < len; i++) {
    clear <<= 1;
    clear += 0b1;
  }

  clear <<= pos;
  clear = ~clear;

  return reg & clear;
}

int main() {
  uint32_t reg;
  uint8_t pos, len;
  scanf("%u %hhu %hhu", &reg, &pos, &len);
  printf("%u", clear_bits(reg, pos, len));
  return 0;
}
