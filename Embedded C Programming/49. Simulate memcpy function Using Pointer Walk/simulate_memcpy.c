#include <stdio.h>

void simulate_memcpy(int *dest, int *src, int n) {
  // Your logic here
  for (int i = 0; i < n; i++) {
    *(dest + i) = *(src + i);
  }
}

int main() {
  int n;
  scanf("%d", &n);

  int src[100], dest[100];

  for (int i = 0; i < n; i++) {
    scanf("%d", &src[i]);
  }

  simulate_memcpy(dest, src, n);

  for (int i = 0; i < n; i++) {
    printf("%d", dest[i]);
    if (i < n - 1) {
      printf(" ");
    }
  }

  return 0;
}
