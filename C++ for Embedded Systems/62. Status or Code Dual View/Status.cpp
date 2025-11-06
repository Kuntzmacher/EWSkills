#include <cstdint>
#include <iostream>
using namespace std;

// your code here: define struct Status with anonymous union and bool ok
struct Status {
  union {
    uint16_t code;
    struct {
      uint8_t low;
      uint8_t high;
    };
  };
  bool ok;
};

int main() {
  uint16_t c;
  cin >> c;
  Status s;
  s.code = c;
  s.ok = (s.code == 0);
  cout << "low=" << (int)s.low << " high=" << (int)s.high
       << " ok=" << (s.ok ? "true" : "false");
  return 0;
}
