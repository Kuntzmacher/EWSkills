#include <cstdint>
#include <iostream>
using namespace std;

// your code here :- declare enum class ErrorCode
// ErrorCode has 4 values of type uint8_t --> None, Timeout, Overflow and
// Invalid
enum class ErrorCode : uint8_t {
  None,
  Timeout,
  Overflow,
  Invalid,
};

const char *toString(ErrorCode e) {
  // your code here
  // define a function that returns the string of input error code
  // eg : error code : None , function return : "None" string
  switch (e) {
  case ErrorCode::None:
    return "None";
  case ErrorCode::Timeout:
    return "Timeout";
  case ErrorCode::Overflow:
    return "Overflow";
  case ErrorCode::Invalid:
    return "Invalid";
  }
}

int main() {
  int x;
  cin >> x;
  ErrorCode e = static_cast<ErrorCode>(x);
  cout << toString(e);
  return 0;
}
