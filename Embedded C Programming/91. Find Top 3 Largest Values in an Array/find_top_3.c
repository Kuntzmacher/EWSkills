#include <stdint.h>
#include <stdio.h>

void sort_array(uint8_t *arr, uint8_t n) {
  uint8_t temp = 0;
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

void find_top_3(uint8_t *arr, uint8_t n) {
  // Your logic here
  sort_array(arr, n);
  if (n >= 3) {
    printf("%d %d %d", arr[n - 1], arr[n - 2], arr[n - 3]);
  } else if (n == 2) {
    printf("%d %d", arr[n - 1], arr[n - 2]);
  } else if (n == 1) {
    printf("%d", arr[n - 1]);
  }
}

int main() {
  uint8_t n;
  scanf("%hhu", &n);
  uint8_t arr[100];

  for (uint8_t i = 0; i < n; i++) {
    scanf("%hhu", &arr[i]);
  }

  find_top_3(arr, n);
  return 0;
}
