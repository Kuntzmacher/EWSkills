#include <stdint.h>
#include <stdio.h>

void build_packet(uint8_t command, uint16_t value, uint8_t status,
                  uint32_t checksum) {
  uint8_t buffer[10];

  // Your logic to fill buffer
  buffer[0] = 0xA5;
  buffer[1] = command;

  buffer[2] = value & 0xFF;
  buffer[3] = (value >> 8) & 0xFF;

  buffer[4] = status;

  buffer[5] = checksum & 0xFF;
  buffer[6] = (checksum >> 8) & 0xFF;
  buffer[7] = (checksum >> 16) & 0xFF;
  buffer[8] = (checksum >> 24) & 0xFF;

  buffer[9] = 0x5A;

  // Then print buffer
  for (int i = 0; i < 10; i++) {
    printf("%d ", buffer[i]);
  }
}

int main() {
  uint8_t cmd, status;
  uint16_t val;
  uint32_t crc;

  scanf("%hhu %hu %hhu %u", &cmd, &val, &status, &crc);
  build_packet(cmd, val, status, crc);
  return 0;
}
