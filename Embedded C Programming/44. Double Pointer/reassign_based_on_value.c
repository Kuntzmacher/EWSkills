#include <stdio.h>

void reassign_based_on_value(int **pp, int *n2_ptr) {
  // Your logic here
  if (**pp % 2 == 0) {
    *pp = n2_ptr;
  }
}

int main() {
  int n1, n2;
  scanf("%d %d", &n1, &n2);

  int *p = &n1;

  reassign_based_on_value(&p, &n2);

  printf("%d", *p);

  return 0;
}
