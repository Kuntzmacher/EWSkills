#include <iostream>
#include <memory>
using namespace std;

class Sensor {
public:
  int read() { return 42; }
};

int main() {

  // your code here: declare unique_ptr<Sensor> and call read() using ->
  unique_ptr<Sensor> p = make_unique<Sensor>();
  cout << "Sensor reading: " << p->read() << endl;

  return 0;
}
