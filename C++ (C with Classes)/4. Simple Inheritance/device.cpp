#include <iostream>
using namespace std;

class Device {
public:
  // your code here: implement void printType() to print "Generic Device"
  void printType() { cout << "Generic Device" << endl; }
};

// your code here: define class Sensor inheriting publicly from Device
class Sensor : public Device {
public:
  void printSensor() { cout << "Sensor Device" << endl; }
};

// implement void printSensor() to print "Sensor Device"

int main() {
  Sensor s;
  s.printType();   // inherited method
  s.printSensor(); // derived method
  return 0;
}
