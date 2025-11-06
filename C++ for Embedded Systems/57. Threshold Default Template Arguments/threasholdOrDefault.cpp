#include <iostream>
using namespace std;

template <typename T = int> T thresholdOrDefault(T v, T def = {}) {
  // Your code here
  if (v < 0) {
    return def;
  } else {
    return v;
  }
}

int main() {
  int v, def;
  if (cin.peek() == '-') { // value is negative
    cin >> v;
    if (cin.peek() == ' ') {
      cin >> def;
      cout << thresholdOrDefault(v, def) << "\n";
    } else {
      cout << thresholdOrDefault(v) << "\n";
    }
  } else {
    cin >> v;
    cout << thresholdOrDefault(v) << "\n";
  }
  return 0;
}
