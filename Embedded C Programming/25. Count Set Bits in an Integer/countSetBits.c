#include <stdio.h>

int countSetBits(unsigned int n) {
  int count = 0;

  while (n != 0) {

    if ((n & 1) == 1) {
      count++;
    }

    n >>= 1;
  }

  return count;
}

int main() {
  int n;
  scanf("%d", &n);
  printf("%d", countSetBits(n));
  return 0;
}
