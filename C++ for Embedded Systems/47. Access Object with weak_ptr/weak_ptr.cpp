#include <iostream>
#include <memory>
using namespace std;

class Device {
public:
  void status() { cout << "Device is active\n"; }
};

int main() {
  // your code here

  // Create a shared_ptr<Device> .
  shared_ptr<Device> shared = make_shared<Device>();

  // Create a weak_ptr<Device> that observes the above object.
  weak_ptr<Device> wp = shared;

  if (auto temp = wp.lock()) {
    temp->status();
  }
  return 0;
}
