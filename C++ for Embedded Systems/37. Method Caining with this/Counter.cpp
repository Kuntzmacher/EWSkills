#include <iostream>
using namespace std;

class Counter {
private:
  int value;

public:
  Counter() : value(0) {}

  // your code here: implement increment() to add 1 and return *this
  Counter increment() {
    this->value++;
    return *this;
  }

  // your code here: implement decrement() to subtract 1 and return *this
  Counter decrement() {
    this->value--;
    return *this;
  }

  int getValue() const { return value; }
};

int main() {
  Counter c;
  // example chain of calls
  c.increment().increment().decrement();
  cout << c.getValue();
  return 0;
}
