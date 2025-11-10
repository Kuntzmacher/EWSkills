#include <stdint.h>
#include <stdio.h>

void bubble_sort_desc(uint8_t *arr, uint8_t n) {
  // Your logic here
  uint8_t temp = 0;
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] < arr[j + 1]) {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
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

  bubble_sort_desc(arr, n);

  for (uint8_t i = 0; i < n; i++) {
    printf("%hhu", arr[i]);
    if (i < n - 1) {
      printf(" ");
    }
  }

  return 0;
}
