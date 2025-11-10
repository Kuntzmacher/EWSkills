#include <stdint.h>
#include <stdio.h>

int binary_search(uint8_t *arr, uint8_t n, uint8_t key) {
  // Your logic here

  int low = 0;
  int high = n - 1;

  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (arr[mid] == key) {
      return mid;
    } else if (arr[mid] < key) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }

  return -1;
}

int main() {
  uint8_t n, key;
  scanf("%hhu", &n);
  uint8_t arr[100];

  for (uint8_t i = 0; i < n; i++) {
    scanf("%hhu", &arr[i]);
  }
  scanf("%hhu", &key);

  int index = binary_search(arr, n, key);
  printf("%d", index);
  return 0;
}
