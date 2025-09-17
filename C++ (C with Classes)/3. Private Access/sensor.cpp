#include <iostream>
using namespace std;

class Sensor {
private:
  // your code here: declare private int value
  int value;

public:
  // your code here: implement setValue and getValue
  int getValue() { return this->value; }

  void setValue(int val) { this->value = val; }
};

int main() {
  Sensor s;
  s.setValue(75);
  cout << "Sensor value: " << s.getValue();
  return 0;
}
