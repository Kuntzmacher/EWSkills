#include <iostream>
using namespace std;

class Distance {
private:
  int meters;

public:
  Distance(int m) : meters(m) {}

  // your code here: define operator+ to add two Distance objects
  Distance operator+(const Distance &other) {
    return Distance(this->meters + other.meters);
  }

  int getMeters() const { return meters; }
};

int main() {
  int a, b;
  cin >> a >> b;
  Distance d1(a);
  Distance d2(b);
  Distance total = d1 + d2; // must use overloaded operator
  cout << "Total=" << total.getMeters();
  return 0;
}
