#include <cstdint>
#include <iostream>
using namespace std;

// your code here: declare enum class AdcConfig : uint8_t
// with ChannelEnable=1, InterruptEnable=2, DMAEnable=4
enum class AdcConfig {
  ChannelEnable = 1,
  InterruptEnable = 2,
  DMAEnable = 4,
};

void printConfig(uint8_t cfg) {
  // your code here: implement void printConfig(uint8_t cfg)
  if ((cfg & static_cast<uint8_t>(AdcConfig::ChannelEnable)) != 0) {
    cout << "ChannelEnable ";
  }
  if ((cfg & static_cast<uint8_t>(AdcConfig::InterruptEnable)) != 0) {
    cout << "InterruptEnable ";
  }
  if ((cfg & static_cast<uint8_t>(AdcConfig::DMAEnable)) != 0) {
    cout << "DMAEnable ";
  }

  if (((cfg & static_cast<uint8_t>(AdcConfig::ChannelEnable)) == 0) &&
      ((cfg & static_cast<uint8_t>(AdcConfig::InterruptEnable)) == 0) &&
      ((cfg & static_cast<uint8_t>(AdcConfig::DMAEnable)) == 0)) {
    cout << "None";
  }
}

int main() {
  int ch, intr, dma;
  cin >> ch >> intr >> dma;
  uint8_t cfg = 0;
  if (ch)
    cfg |= static_cast<uint8_t>(AdcConfig::ChannelEnable);
  if (intr)
    cfg |= static_cast<uint8_t>(AdcConfig::InterruptEnable);
  if (dma)
    cfg |= static_cast<uint8_t>(AdcConfig::DMAEnable);
  printConfig(cfg);
  return 0;
}
