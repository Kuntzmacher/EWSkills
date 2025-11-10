#include <stdio.h>

int find_pattern(int *mem, int n) {
  // Write your pointer-based logic here
  int index = -1;
  int j = 1;

  for (int i = 1; i < n; i++) {
    if (*(mem + i) == (*(mem + i - 1) + 1)) {
      j++;
      if (j == 3) {
        return i - 2;
      }
    } else {
      j = 1;
    }
  }

  return index;
}

int main() {
  int n, arr[100];
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int res = find_pattern(arr, n);
  printf("%d", res);

  return 0;
}
