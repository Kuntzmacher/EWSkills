#include <stdint.h>
#include <stdio.h>
#include <string.h>

#define MAX 10

void process_stack(int n) {
  // Your logic here
  int stack[MAX] = {0};
  int count = 0;
  char command[10];
  int item = 0;
  for (int i = 0; i < n; i++) {
    scanf("%s", command);

    if (strncmp(command, "push", 4) == 0) {
      scanf("%d", &item);
      if (count == MAX) {
        printf("Stack Overflow\n");
      } else {
        stack[count] = item;
        count++;
      }
    }

    if (strncmp(command, "pop", 3) == 0) {
      if (count == 0) {
        printf("Stack Underflow\n");
      } else {
        printf("%d\n", stack[count-1]);
        count--;
      }
    }
  }
}

int main() {
  int n;
  scanf("%d", &n);
  getchar(); // Consume newline after number

  process_stack(n);
  return 0;
}
