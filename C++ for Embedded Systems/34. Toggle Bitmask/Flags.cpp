#include <cstdint>
#include <iostream>
using namespace std;

class Flags {
private:
  uint8_t bits;

public:
  Flags(uint8_t b) : bits(b) {}

  // your code here: define operator~ to invert bits
  Flags operator~() const { return ~bits; }

  uint8_t getBits() const { return bits; }
};

int main() {
  int val;
  cin >> val;
  Flags f(val);
  Flags toggled = ~f; // must use overloaded operator
  cout << "Input=" << (int)f.getBits()
       << " Toggled Input=" << (int)toggled.getBits();
  return 0;
}
