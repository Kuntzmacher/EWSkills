#include <stdio.h>

void state_init() { printf("Init"); }
void state_load() { printf("Load"); }
void state_execute() { printf("Execute"); }
void state_exit() { printf("Exit"); }

// Your logic here
void run_state_sequence(int start) {
  // Implement using function pointer array
  void (*arr[4])() = {&state_init, &state_load, &state_execute, &state_exit};
  int i = 0;
  while (i < 3) {
    arr[(start + i) % 4]();
    printf("\n");
    i++;
  }
}

int main() {
  int start;
  scanf("%d", &start);
  run_state_sequence(start);
  return 0;
}
