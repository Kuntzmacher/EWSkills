#include <stdint.h>
#include <stdio.h>

void print_hex(uint16_t num) {
  // Your logic here
  char hex[4];
  char digit;
  int temp = 0;

  if (num == 0) {
    printf("0");
    return;
  }

  for (int i = 0; i < 4; i++) {
    hex[i] = (num >> (i * 4)) & 0xf;
  }

  for (int i = 3; i >= 0; i--) {
    temp = temp * 16 + hex[i];
    if (temp == 0) {
      continue;
    }

    if (hex[i] < 10) {
      digit = hex[i] + '0';
    } else {
      digit = hex[i] + 'A' - 10;
    }
    printf("%c", digit);
  }
}

int main() {
  uint16_t num;
  scanf("%hu", &num);
  print_hex(num);
  return 0;
}
