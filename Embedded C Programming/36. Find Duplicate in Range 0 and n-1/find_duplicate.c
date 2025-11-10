#include <stdio.h>

int find_duplicate(int arr[], int n) {
  // Your logic here
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[i] == arr[j]) {
        return arr[i];
      }
    }
  }
  return -1;
}

int main() {
  int n;
  scanf("%d", &n);

  int arr[100];
  for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  int result = find_duplicate(arr, n);
  printf("%d", result);
  return 0;
}
