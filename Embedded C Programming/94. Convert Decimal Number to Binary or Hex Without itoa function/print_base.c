#include <stdint.h>
#include <stdio.h>

void print_base(uint16_t num, uint8_t base) {
  // Your logic here
  if (num == 0) {
    printf("%d", 0);
  }

  if (base == 2) {
    char rev_str[16] = "";
    char str[16] = "";

    int i = 0;
    while (num > 0) {
      rev_str[i] = (num % 2) + '0';
      i++;
      num /= 2;
    }
    rev_str[i] = '\0';

    for (int j = 0; j < i; j++) {
      str[j] = rev_str[i - j - 1];
    }
    str[i] = '\0';
    printf("%s", str);
    return;
  }

  if (base == 16) {
    char rev_str[4] = "";
    char str[4] = "";

    int i = 0;
    int c;
    while (num > 0) {
      switch (num % 16) {
      case 10:
        c = 'A';
        break;
      case 11:
        c = 'B';
        break;
      case 12:
        c = 'C';
        break;
      case 13:
        c = 'D';
        break;
      case 14:
        c = 'E';
        break;
      case 15:
        c = 'F';
        break;
      }
      if (num % 16 < 10) {
        c = (num % 16) + '0';
      }
      rev_str[i] = c;
      i++;
      num /= 16;
    }
    rev_str[i] = '\0';

    for (int j = 0; j < i; j++) {
      str[j] = rev_str[i - j - 1];
    }
    str[i] = '\0';
    printf("%s", str);
    return;
  }
}

int main() {
  uint16_t num;
  uint8_t base;
  scanf("%hu %hhu", &num, &base);

  print_base(num, base);
  return 0;
}
