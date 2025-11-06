#include <stdint.h>
#include <stdio.h>

void convert_to_big_endian(uint32_t value, uint8_t arr[4]) {

  arr[0] = value >> 8*3;
  arr[1] = value >> 8*2;
  arr[2] = value >> 8*1;
  arr[3] = value;

}

int main() {
  uint32_t value;
  uint8_t arr[4];
  scanf("%u", &value);
  convert_to_big_endian(value, arr);
  for (int i = 0; i < 4; i++) {
    printf("%u", arr[i]);
    if (i < 3) {
      printf(" ");
    }
  }
  return 0;
}
