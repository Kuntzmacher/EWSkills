#include <stdio.h>

int custom_strlen(const char *str) {
  // Your logic here
  int size = 0;
  while (str[size++] != '\0');
  size--;
  return size;
}

int main() {
  char str[101];
  fgets(str, sizeof(str), stdin);

  // Remove newline if present
  int i = 0;
  while (str[i] != '\0') {
    if (str[i] == '\n') {
      str[i] = '\0';
      break;
    }
    i++;
  }

  printf("%d", custom_strlen(str));
  return 0;
}
