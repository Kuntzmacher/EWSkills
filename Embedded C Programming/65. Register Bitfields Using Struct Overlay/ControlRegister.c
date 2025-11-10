#include <stdint.h>
#include <stdio.h>

typedef union {
  struct {
    uint8_t enable : 1;
    uint8_t mode : 2;
    uint8_t interrupt : 1;
    uint8_t reserved : 4;
  } bits;
  uint8_t reg;
} ControlRegister;

int main() {
  uint8_t e, m, i;
  scanf("%hhu %hhu %hhu", &e, &m, &i);

  // Construct and print register value
  ControlRegister cr;

  cr.bits.enable = e;
  cr.bits.mode = m;
  cr.bits.interrupt = i;
  cr.bits.reserved = 0;

  printf("%u", cr.reg);

  return 0;
}
