#include <stdio.h>

int isKthBitSet(int n, int k) {
  // Write your code here
  return (n & (1 << k)) != 0;
}

int main() {
  int n, k;
  scanf("%d %d", &n, &k);
  printf("%d", isKthBitSet(n, k));
  return 0;
}
