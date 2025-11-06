#include <cstdint>
#include <iomanip>
#include <iostream>
using namespace std;

// your code here: define struct AdcSample with timestamp and anonymous union
struct AdcSample {
  uint32_t timestamp;
  union {
    uint16_t raw;
    struct {
      uint8_t lo;
      uint8_t hi;
    };
  };
};

int main() {
  uint32_t ts;
  uint16_t raw;
  cin >> ts >> std::hex >> raw;
  AdcSample sample;
  sample.timestamp = ts;
  sample.raw = raw;
  cout << "ts=" << sample.timestamp << " lo=0x" << hex << uppercase
       << (int)sample.lo << " hi=0x" << hex << uppercase << (int)sample.hi;
  return 0;
}
