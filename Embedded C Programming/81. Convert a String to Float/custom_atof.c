#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

float custom_atof(const char *str) {
  // Your logic here
  float num0 = 0, num1 = 0, num2 = 0;
  int i = 0;
  int j = 0;
  int sign = 1;
  bool after_dot = false;

  if (str[0] == '-') {
    sign = -1;
    i++;
  } else if (str[0] == '+') {
    i++;
  }

  while (str[i] != '\0') {

    if (str[i] == '.') {
      after_dot = true;
      i++;
      continue;
    }

    if (!after_dot) {
      num1 = num1 * 10 + (str[i] - '0');
    } else {
      num2 = num2 * 10 + (str[i] - '0');
      j++;
    }

    i++;
  }

  for (int k = 0; k < j; k++) {
    num2 /= 10;
  }

  num0 = num1 + num2;

  return num0 * sign;
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

  float value = custom_atof(str);
  printf("%.2f", value);
  return 0;
}
