#include <stdio.h>

void print_integer_as_string(int num) {
  // Your logic here

  if (num == 0) {
    printf("0");
    return;
  }

  if (num < 0) {
    printf("- ");
    num *= -1;
  }

  char buffer[32];
  int n = 0;
  while (num > 0) {
    buffer[n] = num % 10;
    n++;
    num /= 10;
  }

  for (int i = n - 1; i >= 0; i--) {
    printf("%c ", buffer[i] + '0');
  }
}

int main() {
  int num;
  scanf("%d", &num);
  print_integer_as_string(num);
  return 0;
}
