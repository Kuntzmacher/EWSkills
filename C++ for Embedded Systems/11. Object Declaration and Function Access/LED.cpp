#include <iostream>
using namespace std;

class LED {
public:
  void turnOn() { cout << "LED ON\n"; }
  void turnOff() { cout << "LED OFF\n"; }
};

int main() {
  // your code here: declare LED object and call its functions
  LED led;
  led.turnOn();
  led.turnOff();
  return 0;
}
