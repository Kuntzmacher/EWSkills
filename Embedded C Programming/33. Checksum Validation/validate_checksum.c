#include <stdio.h>

int validate_checksum(int *mem, int n) {
  // Write your XOR scan logic here
  int temp = mem[0];
  for (int i = 1; i < n - 1; i++) {
    temp ^= mem[i];
  }
  return temp == mem[n - 1];
}

int main() {
  int n, arr[100];
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int result = validate_checksum(arr, n);
  printf("%d", result);

  return 0;
}
