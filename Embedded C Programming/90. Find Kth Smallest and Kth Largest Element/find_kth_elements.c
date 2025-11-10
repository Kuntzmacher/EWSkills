#include <stdint.h>
#include <stdio.h>

void sort_array(uint8_t *arr, uint8_t n) {
  // Sort in ascending order
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

void find_kth_elements(uint8_t *arr, uint8_t n, uint8_t k, uint8_t *smallest,
                       uint8_t *largest) {
  // Your logic here
  sort_array(arr, n);
  *smallest = arr[k - 1];
  *largest = arr[n - k];
}

int main() {
  uint8_t n, k;
  scanf("%hhu", &n);
  uint8_t arr[100];

  for (uint8_t i = 0; i < n; i++) {
    scanf("%hhu", &arr[i]);
  }

  scanf("%hhu", &k);

  uint8_t smallest, largest;
  find_kth_elements(arr, n, k, &smallest, &largest);

  printf("%hhu %hhu", smallest, largest);
  return 0;
}
