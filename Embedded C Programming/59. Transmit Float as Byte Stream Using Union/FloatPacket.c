#include <stdint.h>
#include <stdio.h>

typedef union {
  float f;
  uint8_t bytes[4];
} FloatPacket;

int main() {
  float input;
  scanf("%f", &input);

  // Fill union and print 4 bytes
  FloatPacket fp;
  fp.f = input;

  for (int i = 0; i < 4; i++) {
    printf("Byte %d: %u\n", i, fp.bytes[i]);
  }

  return 0;
}
