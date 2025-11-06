#include <iostream>
#include <string>
using namespace std;

enum class State { Idle, Busy, Error };

const char *toString(State s) {
  switch (s) {
  case State::Idle:
    return "Idle";
  case State::Busy:
    return "Busy";
  case State::Error:
    return "Error";
  }
  return "";
}

int main() {
  int n;
  cin >> n;
  State state = State::Idle;
  for (int i = 0; i < n; i++) {
    string cmd;
    cin >> cmd;

    // your code here: implement transition logic to update state
    if (cmd == "start" && state == State::Idle) {
      state = State::Busy;
    } else if (cmd == "done" && state == State::Busy) {
      state = State::Idle;
    } else if (cmd == "fail" && state == State::Busy) {
      state = State::Error;
    }
  }
  cout << toString(state);
  return 0;
}
