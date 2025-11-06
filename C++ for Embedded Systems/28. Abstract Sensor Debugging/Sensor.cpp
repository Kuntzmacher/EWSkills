#include <iostream>
using namespace std;

class Sensor {
public:
  virtual int readValue() const = 0; // abstract function
};

class TemperatureSensor : public Sensor {
private:
  int temperature;

public:
  TemperatureSensor(int t) : temperature(t) {}
  // your code here
  int readValue() const override { return temperature; }
};

int main() {
  int t;
  cin >> t;
  TemperatureSensor ts(t);
  Sensor *ptr = &ts;
  cout << "Temperature=" << ptr->readValue();
  return 0;
}
