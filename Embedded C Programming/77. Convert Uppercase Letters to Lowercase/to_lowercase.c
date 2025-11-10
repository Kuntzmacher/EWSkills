#include <stdint.h>
#include <stdio.h>

void to_lowercase(char *str) {
  // Your logic here
  int diff = 'A' - 'a';
  int i = 0;
  while (str[i] != '\0') {
    if (str[i] >= 'A' && str[i] <= 'Z') {
      str[i] -= diff;
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

  to_lowercase(str);
  printf("%s", str);
  return 0;
}
