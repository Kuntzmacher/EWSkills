#include <iostream>
#include <stdexcept>
using namespace std;

// your code here: define calibrate(int value)
void calibrate(int value) {
  if (value < 0) {
    throw invalid_argument("Negative not allowed");
  } else if (value > 1000) {
    throw runtime_error("Out of range");
  } else {
    cout << "Calibrated with " << value;
  }
}

int main() {
  int v;
  cin >> v;
  try {
    calibrate(v);
  } catch (const invalid_argument &e) {
    cout << "Error: " << e.what() << "\n";
  } catch (const runtime_error &e) {
    cout << "Error: " << e.what() << "\n";
  }
  return 0;
}
