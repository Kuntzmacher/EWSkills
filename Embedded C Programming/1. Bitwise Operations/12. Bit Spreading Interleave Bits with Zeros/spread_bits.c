#include <stdint.h>
#include <stdio.h>

uint16_t spread_bits(uint8_t val) {
  // Your logic here
  uint16_t answer = 0;
  for (int i = 0; i < 8; i++) {
    if ((val & (1 << i)) != 0) {
      answer |= (1 << (i * 2));
    }
  }
  return answer;
}

int main() {
  uint8_t val;
  scanf("%hhu", &val);

  uint16_t result = spread_bits(val);
  printf("%u", result);
  return 0;
}
