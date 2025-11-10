#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

void classify_string(const char *str) {
  // Your logic here
  bool num = false;
  bool alpha = false;
  int i = 0;

  while (str[i] != '\0') {
    if (str[i] >= '0' && str[i] <= '9') {
      num = true;
    } else if ((str[i] >= 'a' && str[i] <= 'z') ||
               (str[i] >= 'A' && str[i] <= 'Z')) {
      alpha = true;
    } else {
      printf("MIXED");
      return;
    }

    if (num && alpha) {
      printf("MIXED");
      return;
    }
    i++;
  }

  if (num) {
    printf("NUMERIC");
  } else if (alpha) {
    printf("ALPHABETIC");
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

  classify_string(str);
  return 0;
}
