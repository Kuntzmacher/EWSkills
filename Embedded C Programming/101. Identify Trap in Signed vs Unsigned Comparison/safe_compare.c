#include <stdint.h>
#include <stdio.h>

int safe_compare(int8_t a, uint8_t b) {
  // Your logic here
  if (a < 0) {
    return 1;
  }
  return (uint8_t)a < b;
}

int main() {
  int8_t a;
  uint8_t b;
  scanf("%hhd %hhu", &a, &b);
  printf("%d", safe_compare(a, b));
  return 0;
}
