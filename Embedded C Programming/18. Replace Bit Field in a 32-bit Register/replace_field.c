#include <stdint.h>
#include <stdio.h>

uint32_t replace_field(uint32_t reg, uint32_t val, uint8_t pos, uint8_t len) {

  uint32_t bits = ~(((1U << len) - 1) << pos);
  reg &= bits;

  reg |= (val << pos);

  return reg;
}

int main() {
  uint32_t reg, val;
  uint8_t pos, len;
  scanf("%u %u %hhu %hhu", &reg, &val, &pos, &len);
  printf("%u", replace_field(reg, val, pos, len));
  return 0;
}
