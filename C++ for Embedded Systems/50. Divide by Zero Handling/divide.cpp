#include <iostream>
#include <stdexcept>
using namespace std;

// your code here: define divide(int a, int b)
int divide(int a, int b) {
  if (b == 0) {
    throw runtime_error("Division by zero");
  } else {
    return a / b;
  }
}

int main() {
  int a, b;
  cin >> a >> b;
  try {
    int result = divide(a, b);
    cout << "Result: " << result << "\n";
  } catch (const runtime_error &e) {
    cout << "Error: " << e.what() << "\n";
  }
  return 0;
}
