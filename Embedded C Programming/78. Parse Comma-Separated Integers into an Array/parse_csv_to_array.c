#include <stdint.h>
#include <stdio.h>

void parse_csv_to_array(const char *str, uint8_t *arr, uint8_t *count) {
  // Your logic here
  int i = 0;
  int j = 0;
  char temp[100];
  int num = -1;

  while (str[i] != '\0') {
    if (str[i] != ',') {
      temp[j] = str[i];
      j++;
    } else {
      temp[j] = '\0';
      num = 0;
      for (int k = 0; k < j; k++) {
        num = num * 10 + (str[i + k - j] - '0');
      }
      j = 0;
      arr[*count] = num;
      (*count)++;
    }
    i++;
  }

  if (j > 0) {
    temp[j] = '\0';
    num = 0;
    for (int k = 0; k < j; k++) {
      num = num * 10 + (str[i + k - j] - '0');
    }
    j = 0;
    arr[*count] = num;
    (*count)++;
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

  uint8_t arr[20];
  uint8_t count = 0;

  parse_csv_to_array(str, arr, &count);

  for (uint8_t i = 0; i < count; i++) {
    printf("%u", arr[i]);
    if (i < count - 1) {
      printf(" ");
    }
  }
  return 0;
}
