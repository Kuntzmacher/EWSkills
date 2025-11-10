#include <stdint.h>
#include <stdio.h>

void classify_chars(const char *str, uint8_t *alpha, uint8_t *digit,
                    uint8_t *symbol) {
  // Your logic here
  int i = 0;
  while (str[i] != '\0') {
    if (str[i] == ' ') {
    } else if ((str[i] >= 'a' && str[i] <= 'z') ||
               (str[i] >= 'A' && str[i] <= 'Z')) {
      (*alpha)++;
    } else if (str[i] >= '0' && str[i] <= '9') {
      (*digit)++;
    } else {
      (*symbol)++;
    }
    i++;
  }
}

int main() {
  char str[101];
  fgets(str, sizeof(str), stdin);

  // Remove newline
  uint8_t i = 0;
  while (str[i]) {
    if (str[i] == '\n') {
      str[i] = '\0';
      break;
    }
    i++;
  }

  uint8_t alpha = 0, digit = 0, symbol = 0;
  classify_chars(str, &alpha, &digit, &symbol);
  printf("Alphabets = %u\nDigits = %u\nSymbols = %u", alpha, digit, symbol);
  return 0;
}
