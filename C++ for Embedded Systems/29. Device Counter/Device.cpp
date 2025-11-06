#include <iostream>
using namespace std;

class Device {
private:
  int id;
  // your code here: declare variable to track total devices
  static int count;
public:
  Device(int id_) : id(id_) {
    // increment counter whenever a new object is created
    count++;
  }
  static int getCount() { return count; }
};

// static member is also required to declare out of class
int Device::count = 0;

int main() {
  Device d1(1);
  Device d2(2);
  Device d3(3);
  cout << "Total devices created: " << Device::getCount();
  return 0;
}
