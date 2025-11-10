#include <stdint.h>
#include <stdio.h>

void find_min_max(uint8_t *arr, uint8_t n, uint8_t *min, uint8_t *max) {
  // Your logic here
  *min = arr[0];
  *max = arr[0];

  for (uint8_t i = 0; i < n; i++) {
    if (arr[i] < *min) {
      *min = arr[i];
    }
    if (arr[i] > *max) {
      *max = arr[i];
    }
  }
}

int main() {
  uint8_t n;
  scanf("%hhu", &n);
  uint8_t arr[100];

  for (uint8_t i = 0; i < n; i++) {
    scanf("%hhu", &arr[i]);
  }

  uint8_t min_val, max_val;
  find_min_max(arr, n, &min_val, &max_val);

  printf("%hhu %hhu", min_val, max_val);
  return 0;
}
