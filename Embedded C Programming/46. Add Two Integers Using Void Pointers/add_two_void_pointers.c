#include <stdio.h>

int add_two_void_pointers(void *a, void *b) {
  // Your logic here
  int sum;

  sum = *(int *)a + *(int *)b;

  return sum;
}

int main() {
  int x, y;
  scanf("%d %d", &x, &y);

  int result = add_two_void_pointers(&x, &y);
  printf("%d", result);

  return 0;
}
