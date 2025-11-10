#include <stdio.h>

void swap_pointers(int **p1, int **p2) {
  // Your logic here
  int *temp = *p1;
  *p1 = *p2;
  *p2 = temp;
}

int main() {
  int a, b;
  scanf("%d %d", &a, &b);

  int *p1 = &a;
  int *p2 = &b;

  swap_pointers(&p1, &p2);

  printf("%d %d", *p1, *p2);

  return 0;
}
