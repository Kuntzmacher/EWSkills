#include <stdint.h>
#include <stdio.h>

uint16_t binary_to_uint(const char *str) {
  // Your logic here
  uint16_t num = 0;

  int i = 0;
  while (str[i] != '\0') {

    num = num * 2 + (str[i] - '0');

    i++;
  }

  return num;
}

int main() {
  char bin[20];
  scanf("%s", bin);

  printf("%u", binary_to_uint(bin));
  return 0;
}
