#include <iostream>
using namespace std;

class Sensor {
public:
  // your code here: define constructor taking int id and printing "Sensor <id>
  // initialized"
  Sensor(int id) {
    cout << "Sensor " << id << " initialized";
  }
};

int main() {
  Sensor s(101);
  return 0;
}
