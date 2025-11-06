#include <cstdint>
#include <iostream>
using namespace std;

// your code here: declare enum class Mode with values Input, Output, PullUp,
// PullDown
enum class Mode { Input, Output, PullUp, PullDown };

// your code here: implement const char* toString(Mode m)
const char *toString(Mode m) {
  switch (m) {
  case Mode::Input:
    return "INPUT";
  case Mode::Output:
    return "OUTPUT";
  case Mode::PullUp:
    return "PULLUP";
  case Mode::PullDown:
    return "PULLDOWN";
  default:
    return "";
  }
}

int main() {
  int x;
  cin >> x;

  Mode m = Mode::Input; // default
  if (x == 0)
    m = Mode::Input;
  else if (x == 1)
    m = Mode::Output;
  else if (x == 2)
    m = Mode::PullUp;
  else if (x == 3)
    m = Mode::PullDown;

  cout << toString(m);
  return 0;
}
