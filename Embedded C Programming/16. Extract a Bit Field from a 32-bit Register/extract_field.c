#include <stdint.h>
#include <stdio.h>

uint32_t extract_field(uint32_t reg, uint8_t pos, uint8_t len) {
  // Your code here
  uint32_t field = 1;

  for (int i = 1; i < len; i++) {
    field <<= 1;
    field |= 1;
  }

  field <<= pos;

  return (reg & field) >> pos;
}

int main() {
  uint32_t reg;
  uint8_t pos, len;
  scanf("%u %hhu %hhu", &reg, &pos, &len);
  printf("%u", extract_field(reg, pos, len));
  return 0;
}
