#include <iostream>
using namespace std;

class Sensor {
public:
  // your code here: implement int read() to return 100
  int read() {
    return 100;
  }
};

int main() {
  Sensor s;
  cout << "Sensor reading: " << s.read();
  return 0;
}
