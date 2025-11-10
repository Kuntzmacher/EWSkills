#include <stdint.h>
#include <stdio.h>

uint16_t hex_to_uint(const char *str) {
  // Your logic here
  uint16_t num = 0;
  uint16_t digit = 0;

  for (int i = 0; str[i] != '\0'; i++) {
    if ((str[i] - '0') < 10) {
      digit = str[i] - '0';
    } else {
      switch (str[i]) {
      case 'A':
        digit = 10;
        break;
      case 'B':
        digit = 11;
        break;
      case 'C':
        digit = 12;
        break;
      case 'D':
        digit = 13;
        break;
      case 'E':
        digit = 14;
        break;
      case 'F':
        digit = 15;
        break;

      case 'a':
        digit = 10;
        break;
      case 'b':
        digit = 11;
        break;
      case 'c':
        digit = 12;
        break;
      case 'd':
        digit = 13;
        break;
      case 'e':
        digit = 14;
        break;
      case 'f':
        digit = 15;
        break;
      }
    }

    num = num * 16 + digit;
  }

  return num;
}

int main() {
  char hex[10];
  scanf("%s", hex);

  printf("%u", hex_to_uint(hex));
  return 0;
}
