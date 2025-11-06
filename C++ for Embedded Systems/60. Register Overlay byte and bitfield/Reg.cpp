#include <cstdint>
#include <iostream>
using namespace std;

// your code here: define a union Reg with uint8_t raw and bitfields (en:1,
// mode:3, reserved:4)
union Reg {
  uint8_t raw;
  struct {
    unsigned en : 1;
    unsigned mode : 3;
    unsigned reserved : 4;
  } bits;
};

int main() {
  int val;
  cin >> val;
  Reg r;
  r.raw = val;
  cout << "en=" << r.bits.en << " mode=" << r.bits.mode;
  return 0;
}
