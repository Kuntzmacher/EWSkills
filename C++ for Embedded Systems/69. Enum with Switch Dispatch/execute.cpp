#include <iostream>
#include <string>
using namespace std;

enum class Command { Start, Stop, Reset };

void execute(Command c) {
  switch (c) {
  case Command::Start:
    cout << "STARTING...";
    break;
  case Command::Stop:
    cout << "STOPPING...";
    break;
  case Command::Reset:
    cout << "RESETTING...";
    break;
  }
}

int main() {
  string cmd;
  cin >> cmd;
  Command c = Command::Start; // default

  // your code here: assign c based on input string
  if (cmd == "Start") {
    c = Command::Start;
  } else if (cmd == "Stop") {
    c = Command::Stop;
  } else if (cmd == "Reset") {
    c = Command::Reset;
  }

  execute(c);
  return 0;
}
