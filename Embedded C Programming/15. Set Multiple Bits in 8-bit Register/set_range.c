#include <stdint.h>
#include <stdio.h>

uint8_t set_range(uint8_t reg, uint8_t start, uint8_t end) {
  // Your code here

  for (int i = start; i <= end; i++) {
    reg |= (1 << i);
  }

  return reg;
}

int main() {
  uint8_t reg, start, end;
  scanf("%hhu %hhu %hhu", &reg, &start, &end);
  printf("%u", set_range(reg, start, end));
  return 0;
}
