#include <stdint.h>
#include <stdio.h>

unsigned char extractNibble(unsigned char reg, int pos) {
  // Write your code here
  uint8_t mask = 0b1111;

  if (pos == 1) {
    reg >>= 4;
  }

  return reg & mask;
}

int main() {
  unsigned char reg;
  int pos;
  scanf("%hhu %d", &reg, &pos);
  printf("%d", extractNibble(reg, pos));
  return 0;
}
