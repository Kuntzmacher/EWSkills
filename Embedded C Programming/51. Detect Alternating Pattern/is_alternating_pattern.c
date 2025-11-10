#include <stdio.h>

int is_alternating_pattern(int *mem, int k) {
  // Write your pointer logic here

  int n = 1;

  for (int i = 1; i < k; i++) {
    if (*(mem + i) == 1 - (*(mem + i - 1))) {
      n++;
      if (n == k) {
        return 1;
      }
    } else {
      n = 1;
    }
  }

  return 0;
}

int main() {
  int n, k, arr[100];
  scanf("%d %d", &n, &k);

  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int res = is_alternating_pattern(arr, k);
  printf("%d", res);

  return 0;
}
