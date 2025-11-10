#include <stdint.h>
#include <stdio.h>

int custom_atoi(const char *str) {
  // Your logic here
  int num = 0;
  int sign = 1;
  int i = 0;

  if (str[0] == '-') {
    sign = -1;
    i = 1;
  } else if (str[0] == '+') {
    sign = 1;
    i = 1;
  } else if (!(str[0] >= '0' && str[0] <= '9')) {
    return 0;
  }

  while (str[i] != '\0') {
    if (str[i] >= '0' && str[i] <= '9') {
      num = num * 10 + (str[i] - '0');
    } else {
      break;
    }
    i++;
  }

  num *= sign;

  return num;
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

  printf("%d", custom_atoi(str));
  return 0;
}
