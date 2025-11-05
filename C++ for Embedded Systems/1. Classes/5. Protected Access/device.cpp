#include <iostream>
using namespace std;

class BaseDevice {
protected:
  // your code here: declare protected int id
  int id;
};

class DerivedDevice : public BaseDevice {
public:
  // your code here: implement setId() and printId()
  void setId(int v) { this->id = v; }

  void printId() { cout << "Device ID: " << this->id; }
};

int main() {
  DerivedDevice d;
  d.setId(101);
  d.printId();
  return 0;
}
