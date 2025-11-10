#include <stdint.h>
#include <stdio.h>

typedef union {
  uint32_t value;
  uint8_t bytes[4];
} Register;

// Write logic here to extract bytes using union
void print_bytes(uint32_t input) {
  // Your code here
  Register reg;
  reg.value = input;

  for (int i = 0; i < 4; i++) {
    printf("%u ", reg.bytes[i]);
  }
}

int main() {
  uint32_t num;
  scanf("%u", &num);
  print_bytes(num);
  return 0;
}
