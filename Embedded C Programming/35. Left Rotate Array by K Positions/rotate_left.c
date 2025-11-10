#include <stdio.h>

void rotate(int arr[], int n) {
  int temp = arr[0];
  for (int i = 0; i < n - 1; i++) {
    arr[i] = arr[i + 1];
  }
  arr[n - 1] = temp;
}

void rotate_left(int arr[], int n, int k) {
  // Your logic here
  for (int i = 0; i < k; i++) {
    rotate(arr, n);
  }
}

int main() {
  int n, k;
  scanf("%d %d", &n, &k);

  int arr[100];

  // Read array elements
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  // Rotate the array
  rotate_left(arr, n, k);

  // Print the rotated array
  for (int i = 0; i < n; i++) {
    printf("%d", arr[i]);
    if (i < n - 1) {
      printf(" ");
    }
  }

  return 0;
}
