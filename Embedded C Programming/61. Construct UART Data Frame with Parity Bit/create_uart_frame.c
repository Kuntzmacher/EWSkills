#include <stdint.h>
#include <stdio.h>

typedef struct {
  uint8_t parity_enable : 1;
  uint8_t parity_type : 1;
  uint8_t reserved : 6;
} UART_Control;

uint8_t create_uart_frame(uint8_t data, UART_Control *ctrl) {
  // Your logic here
  if (ctrl->parity_enable == 0) {
    data &= 0b01111111;
  } else {
    int count = 0;

    for (int i = 0; i < 7; i++) {
      if (((data >> i) & 0b1) != 0) {
        count++;
      }
    }

    if ((ctrl->parity_type == 0) && (count % 2 == 0)) {
      data &= 0b01111111;
    } else if ((ctrl->parity_type == 0) && (count % 2 == 1)) {
      data |= 0b10000000;
    } else if ((ctrl->parity_type == 1) && (count % 2 == 0)) {
      data |= 0b10000000;
    } else if ((ctrl->parity_type == 1) && (count % 2 == 1)) {
      data &= 0b01111111;
    }
  }

  return data;
}

int main() {
  uint8_t data;
  scanf("%hhu", &data); // 7-bit input

  uint8_t parity_enable, parity_type;
  scanf("%hhu %hhu", &parity_enable, &parity_type);

  UART_Control ctrl;
  ctrl.parity_enable = parity_enable;
  ctrl.parity_type = parity_type;

  uint8_t frame = create_uart_frame(data, &ctrl);
  printf("frame = 0x%02X", frame);

  return 0;
}
