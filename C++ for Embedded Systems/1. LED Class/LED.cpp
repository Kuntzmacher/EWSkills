#include <iostream>
using namespace std;

class LED {
public:
  // your code here: implement turnOn() to print "LED ON"
  void turnOn() { cout << "LED ON" << endl; }
  // your code here: implement turnOff() to print "LED OFF"
  void turnOff() { cout << "LED OFF" << endl; }
};

int main() {
  LED led;
  led.turnOn();
  led.turnOff();
  return 0;
}
