#include <stdio.h>

typedef struct {
  int buffer[10];
  int head;
  int tail;
  int count;
  int capacity;
} CircularBuffer;

void read_bytes(CircularBuffer *cb, int n) {
  // Your logic here
  int item;
  for (int i = 0; i < n; i++) {
    if (i != 0) {
      printf(" ");
    }
    if (cb->count == 0) {
      printf("NULL");
    } else {
      item = cb->buffer[cb->tail];
      printf("%d", item);
      cb->tail = (cb->tail + 1) % cb->capacity;
      cb->count--;
    }
  }
  printf("\nTail: %d", cb->tail);
}

int main() {
  CircularBuffer cb = {.buffer = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100},
                       .head = 3,
                       .tail = 7,
                       .count = 6,
                       .capacity = 10};

  int n;
  scanf("%d", &n);
  read_bytes(&cb, n);

  return 0;
}
