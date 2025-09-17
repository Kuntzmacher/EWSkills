#include <iostream>
using namespace std;

class Device {
public:
  // your code here: define constructor printing "Device created"
  Device() {
    cout << "Device created" << endl;
  }
  // your code here: define destructor printing "Device destroyed"
  ~Device() {
    cout << "Device destroyed" << endl;
  }
};

int main() {
  Device d;
  return 0;
}
