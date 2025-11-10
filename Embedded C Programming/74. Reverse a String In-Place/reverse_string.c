#include <stdio.h>

void reverse_string(char *str) {
  // Your logic here
  int size = 0;
  char temp;

  while (str[size++] != '\0');
  size--;

  for (int i = 0; i < size / 2; i++) {
    temp = str[i];
    str[i] = str[size - i - 1];
    str[size - i - 1] = temp;
  }
}

int main() {
  char str[101];
  fgets(str, sizeof(str), stdin);

  // Remove newline
  int i = 0;
  while (str[i] != '\0') {
    if (str[i] == '\n') {
      str[i] = '\0';
      break;
    }
    i++;
  }

  reverse_string(str);
  printf("%s", str);
  return 0;
}
