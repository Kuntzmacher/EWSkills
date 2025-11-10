#include <stdint.h>
#include <stdio.h>

typedef struct {
  uint8_t start;
  uint8_t command;
  uint16_t data;
  uint8_t crc;
  uint8_t end;
} Packet;

void print_packet_fields(uint8_t *buffer) {
  // Overlay struct and print values
  Packet *p = (Packet *)buffer;

  printf("Start: %hhu\n", p->start);
  printf("Command: %hhu\n", p->command);
  printf("Data: %hu\n", p->data);
  printf("CRC: %hhu\n", p->crc);
  printf("End: %hhu\n", p->end);
}

int main() {
  uint8_t buffer[6];
  for (int i = 0; i < 6; i++) {
    scanf("%hhu", &buffer[i]);
  }
  print_packet_fields(buffer);
  return 0;
}
