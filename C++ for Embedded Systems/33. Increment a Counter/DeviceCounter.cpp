#include <iostream>
using namespace std;

class DeviceCounter {
private:
  int count;

public:
  DeviceCounter(int c = 0) : count(c) {}

  // your code here: define prefix ++ operator to increment count
  int operator++() { return count++; }

  int getCount() const { return count; }
};

int main() {
  int n;
  cin >> n;
  DeviceCounter counter;
  for (int i = 0; i < n; i++) {
    ++counter; // must use overloaded operator
  }
  cout << "Final count=" << counter.getCount();
  return 0;
}
