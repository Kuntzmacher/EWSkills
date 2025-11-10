#include <stdio.h>

void sliding_window_sum(int arr[], int n, int k) {
  // Your logic here
  int temp = arr[0];
  for (int i = 1; i < k; i++) {
    temp += arr[i];
  }
  printf("%d ", temp);
  for (int i = k; i < n; i++) {
    temp += arr[i];
    temp -= arr[i - k];
    printf("%d ", temp);
  }
}

int main() {
  int n, k, arr[100];
  scanf("%d %d", &n, &k);
  for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  sliding_window_sum(arr, n, k);
  return 0;
}
