#include <iostream>
using namespace std;

// your code here: declare and define setThreshold(int)
void setThreshold(int x) { cout << "Threshold set to " << x << endl; }

// your code here: declare and define setThreshold(double)
void setThreshold(double x) { cout << "Threshold set to " << x << endl; }

int main() {
  double val;
  cin >> val;
  if (val == (int)val) {
    setThreshold((int)val); // int version
  } else {
    setThreshold(val); // double version
  }
  return 0;
}
