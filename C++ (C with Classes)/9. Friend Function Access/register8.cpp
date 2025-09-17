#include <cstdint>
#include <iostream>
using namespace std;

class Register8 {
private:
  uint8_t value;

public:
  void setValue(uint8_t v) { value = v; }

  // your code here: declare a friend function printRegister(const Register8& r)
  friend void printRegister(const Register8 &r);
};

// your code here: implement printRegister that prints "Register value =
// <value>"
void printRegister(const Register8 &r) {
  cout << "Register value = " << (int)r.value << endl;
}

int main() {
  Register8 r;
  r.setValue(170);
  printRegister(r);
  return 0;
}
