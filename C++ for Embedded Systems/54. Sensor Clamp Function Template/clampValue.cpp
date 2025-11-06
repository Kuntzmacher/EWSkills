#include <iostream>
using namespace std;

// your code here: implement template<typename T> T clampValue(T val, T minVal,
// T maxVal)
template <typename T> T clampValue(T val, T minVal, T maxVal) {
  if (val < minVal) {
    return minVal;
  } else if (val > maxVal) {
    return maxVal;
  } else {
    return val;
  }
}

int main() {
  int minVal, maxVal, val;
  cin >> minVal >> maxVal;
  cin >> val;

  cout << "Clamped Value: " << clampValue(val, minVal, maxVal) << "\n";
  return 0;
}
