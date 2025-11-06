#include <iostream>
using namespace std;

class Device {
public:
  int id;
};

class Sensor : public Device {
public:
  int value;
};

int main() {
  // your code here: declare Sensor object, assign id and value, and print them
  Sensor sensor;
  sensor.id = 101;
  sensor.value = 75;
  cout << "Device ID: " << sensor.id << ", Sensor Value: " << sensor.value;
  return 0;
}
