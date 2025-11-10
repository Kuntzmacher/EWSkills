#include <stdint.h>
#include <stdio.h>

int linear_search(uint8_t *arr, uint8_t n, uint8_t key) {
  // Your logic here

  for (int i = 0; i < n; i++) {
    if (arr[i] == key) {
      return i;
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

  int index = linear_search(arr, n, key);
  printf("%d", index);
  return 0;
}
