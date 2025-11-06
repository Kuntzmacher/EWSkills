#include <stdint.h>
#include <stdio.h>

void decode_status(uint8_t status_reg) {
  // Your logic here
  for (int i = 0; i < 8; i++) {
    if ((status_reg & (1 << i))) {
      switch (i) {
        case 0: printf("Power On\n");
                continue;
        case 1: printf("Error\n");
                continue;
        case 2: printf("Tx Ready\n");
                continue;
        case 3: printf("Rx Ready\n");
                continue;
        case 4: printf("Overheat\n");
                continue;
        case 5: printf("Undervoltage\n");
                continue;
        case 6: printf("Timeout\n");
                continue;
        case 7: printf("Reserved\n");
                continue;
      }
    }
  }
}

int main() {
  uint8_t reg;
  scanf("%hhu", &reg);
  decode_status(reg);
  return 0;
}
