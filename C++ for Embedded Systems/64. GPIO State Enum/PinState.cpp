#include <cstdint>
#include <iostream>
using namespace std;

// your code here: declare enum class PinState with values Low, High
enum class PinState { Low, High };

const char *toString(PinState s) {
  // your code here: implement toString(PinState s)
  if (s == PinState::Low) {
    return "LOW";
  } else {
    return "HIGH";
  }
}

int main() {
  int x;
  cin >> x;
  PinState s = (x == 0) ? PinState::Low : PinState::High;
  cout << toString(s);
  return 0;
}
