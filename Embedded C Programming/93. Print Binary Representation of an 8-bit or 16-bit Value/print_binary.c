#include <stdint.h>
#include <stdio.h>

void print_binary(uint16_t val) {
  // Your logic here
  if (val <= 255) {
    printf("%.8b", val);
  } else {
    printf("%.16b", val);
  }
}

int main() {
  uint16_t val;
  scanf("%hu", &val);
  print_binary(val);
  return 0;
}
