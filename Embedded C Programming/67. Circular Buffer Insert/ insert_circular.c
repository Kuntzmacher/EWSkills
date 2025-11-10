#include <stdio.h>

typedef struct {
  int buffer[100];
  int head;
  int tail;
  int count;
  int capacity;
} CircularBuffer;

void insert_circular(CircularBuffer *cb, int value) {
  // Your logic using only pointer access
  if (cb->count != cb->capacity) {
    cb->buffer[cb->head] = value;
    cb->head = (cb->head + 1) % 100;
    cb->count++;
  }
}

int main() {
  int n, k;
  scanf("%d %d", &n, &k);

  CircularBuffer cb = {.head = 0, .tail = 0, .count = 0, .capacity = n};

  for (int i = 0; i < k; i++) {
    int val;
    scanf("%d", &val);
    insert_circular(&cb, val);
  }

  for (int i = 0; i < cb.count; i++) {
    printf("%d", cb.buffer[i]);
    if (i < cb.count - 1) {
      printf(" ");
    }
  }

  return 0;
}
