#include <stdint.h>
#include <stdio.h>

struct Sensor {
  char name[10];
  uint8_t value;
};

void print_above_threshold(struct Sensor sensors[], uint8_t n,
                           uint8_t threshold) {
  // Your logic here
  for (int i = 0; i < n; i++) {
    if (sensors[i].value >= threshold) {
      printf("%s %hhu\n", sensors[i].name, sensors[i].value);
    }
  }
}

int main() {
  uint8_t n, threshold;
  scanf("%hhu %hhu", &n, &threshold);

  struct Sensor sensors[100];
  for (uint8_t i = 0; i < n; i++) {
    scanf("%s %hhu", sensors[i].name, &sensors[i].value);
  }

  print_above_threshold(sensors, n, threshold);
  return 0;
}
