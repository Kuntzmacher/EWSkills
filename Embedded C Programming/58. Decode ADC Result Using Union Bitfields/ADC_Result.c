#include <stdint.h>
#include <stdio.h>

typedef union {
  struct {
    uint16_t adc_value : 12;
    uint16_t channel : 4;
  };
  uint16_t adc_reg;
} ADC_Result;

int main() {
  uint16_t reg;
  scanf("%hx", &reg);

  // Fill union and print channel and adc_value
  ADC_Result adc;
  adc.adc_reg = reg;

  printf("Channel: %u\n", adc.channel);
  printf("ADC Value: %u\n", adc.adc_value);

  return 0;
}
