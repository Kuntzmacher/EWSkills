#include <cstdint>
#include <iostream>
using namespace std;

// your code here: define a union ByteSplitter with uint16_t word and uint8_t
// bytes[2]
union ByteSplitter {
  uint16_t word;
  uint8_t bytes[2];
};

int main() {
  uint16_t val;
  cin >> val;
  ByteSplitter u; // use your union
  u.word = val;   // assign value
  cout << "LSB=" << (int)u.bytes[0] << " MSB=" << (int)u.bytes[1];
  return 0;
}
