#include <stdint.h>
#include <stdio.h>

const char *is_power_of_two(uint32_t n) {
  uint8_t count = 0;
  for (int i = 0; i < 32; i++) {
    if ((n & 1) == 1) {
      count++;
    }
    if (count > 1) {
      return "NO";
    }
    n >>= 1;
  }
  if (count == 1) {
    return "YES";
  }
  return "NO";
}

int main() {
  uint32_t n;
  scanf("%u", &n);

  const char *result = is_power_of_two(n);
  printf("%s", result);
  return 0;
}
