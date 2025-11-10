#include <stdio.h>

void swap(int *p1, int *p2) {
  // Your logic here
  int temp;
  temp = *p1;
  *p1 = *p2;
  *p2 = temp;
}

int main() {
  int a, b;
  scanf("%d %d", &a, &b);

  swap(&a, &b);

  printf("a = %d ", a);
  printf("b = %d", b);

  return 0;
}
