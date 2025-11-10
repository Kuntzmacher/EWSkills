#include <stdio.h>

typedef struct {
  int buffer[10];
  int head;
  int tail;
  int count;
  int capacity;
} CircularBuffer;

// Write your logic inside this function
void peek_bytes(CircularBuffer *cb, int n) {
  // Your code here
  for (int i = 0; i < n; i++) {
    if (i != 0) {
      printf(" ");
    }
    if (i >= cb->count) {
      printf("NULL");
    } else {
      int temp = cb->buffer[(cb->tail + i) % cb->capacity];
      printf("%d", temp);
    }
  }
}

int main() {
  CircularBuffer cb = {.buffer = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100},
                       .head = 3,
                       .tail = 7,
                       .count = 6,
                       .capacity = 10};

  int n;
  scanf("%d", &n);

  peek_bytes(&cb, n);

  return 0;
}
