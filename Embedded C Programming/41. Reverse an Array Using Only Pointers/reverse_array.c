#include <stdio.h>

void reverse_array(int *ptr, int n) {
  // Your logic here
  int temp = 0;
  for (int i = 0; i < n / 2; i++) {
    temp = *(ptr + i);
    *(ptr + i) = *(ptr + n - i - 1);
    *(ptr + n - i - 1) = temp;
  }
}

int main() {
  int n;
  scanf("%d", &n);

  int arr[100];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  reverse_array(arr, n);

  for (int i = 0; i < n; i++) {
    printf("%d", arr[i]);
    if (i < n - 1) {
      printf(" ");
    }
  }

  return 0;
}
