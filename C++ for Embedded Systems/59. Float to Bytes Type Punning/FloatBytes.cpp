#include <cstdint>
#include <iomanip>
#include <iostream>
using namespace std;

// your code here: define a union with float f and uint8_t bytes[4]
union FloatBytes {
  float f;
  uint8_t bytes[4];
};

int main() {
  float val;
  cin >> val;
  FloatBytes u; // use your union
  u.f = val;
  cout << hex << uppercase << setfill('0');
  for (int i = 0; i < 4; i++) {
    cout << setw(2) << (int)u.bytes[i] << " ";
  }
  return 0;
}
