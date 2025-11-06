#include <cstdint>
#include <iostream>
using namespace std;

class Register8 {
private:
  uint8_t value;

public:
  Register8(uint8_t v) : value(v) {}

  // your code here: define operator== to compare two Register8 objects
  bool operator==(const Register8 &other) { return value == other.value; }

  uint8_t getValue() const { return value; }
};

int main() {
  int a, b;
  cin >> a >> b;
  Register8 r1(a);
  Register8 r2(b);
  if (r1 == r2)
    cout << "Equal";
  else
    cout << "Not Equal";
  return 0;
}
