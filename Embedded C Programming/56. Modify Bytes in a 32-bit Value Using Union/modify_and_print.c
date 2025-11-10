#include <stdint.h>
#include <stdio.h>

typedef union {
  uint32_t value;
  uint8_t bytes[4];
} Register;

// Write logic here using union to modify byte[1] and byte[2]
void modify_and_print(uint32_t input, uint8_t b1, uint8_t b2) {
  // Your logic here
  Register reg;
  reg.value = input;
  reg.bytes[1] = b1;
  reg.bytes[2] = b2;
  printf("%u", reg.value);
}

int main() {
  uint32_t num;
  uint8_t b1, b2;
  scanf("%u %hhu %hhu", &num, &b1, &b2);
  modify_and_print(num, b1, b2);
  return 0;
}
