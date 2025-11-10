#include <stdint.h>
#include <stdio.h>

void remove_duplicates(char *str) {
  // Your logic here
  char hash[256] = {0};
  int read = 0, write = 0;
  char c = '\0';

  while (str[read] != '\0') {
    c = str[read];
    if (hash[c] != 1) {
      hash[c] = 1;
      str[write++] = str[read];
    }
    read++;
  }

  str[write] = '\0';
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

  remove_duplicates(str);
  printf("%s", str);
  return 0;
}
