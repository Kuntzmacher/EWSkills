#include <iostream>
using namespace std;

// your code here: declare and define printValue(int)
void printValue(int x) { cout << "Value=" << x << endl; }

// your code here: declare and define printValue(float)
void printValue(float x) { cout << "Value=" << x << endl; }

int main() {
  float val;
  cin >> val;
  if (val == (int)val) {
    printValue((int)val); // int version
  } else {
    printValue(val); // float version
  }
  return 0;
}
