#include <iostream>
#include <memory>
using namespace std;

class Logger {
public:
  void log() { cout << "Logging data\n"; }
};

int main() {

  // your code here: declare a shared_ptr<Logger> and another shared_ptr that
  // shares the same object call log() using both shared pointers
  shared_ptr<Logger> p1 = make_shared<Logger>();
  shared_ptr<Logger> p2 = p1;

  p1->log();
  p2->log();

  return 0;
}
