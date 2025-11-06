#include <stdint.h>
#include <stdio.h>

// Complete the function
uint16_t highest_set_bit(uint16_t reg) {
  // Your logic here
  for (int i = 15; i >= 0; i--) {
    if ((reg & (1 << i)) != 0) {
      return (1 << i);
    }
  }
  return 0;
}

int main() {
  uint16_t reg;
  scanf("%hu", &reg);

  uint16_t result = highest_set_bit(reg);
  printf("%hu", result);
  return 0;
}
