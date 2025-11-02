#include <iostream>
using namespace std;

class Sensor {
public:
  int value;
  void printValue() { cout << "Sensor Value: " << value << "\n"; }
};

int main() {
  // your code here: declare Sensor object pointer, assign value, and call
  // printValue()
  Sensor sense;
  sense.value = 88;
  sense.printValue();
  return 0;
}
