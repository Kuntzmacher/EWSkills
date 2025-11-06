#include <iostream>
#include <string>

using namespace std;

void onPressA() { cout << "Button A pressed\n"; }
void onPressB() { cout << "Button B pressed\n"; }

// your code here: implement simulatePress(void (*callback)())
void simulatePress(void (*callback)()) { callback(); }

int main() {
  string input;
  cin >> input;
  if (input == "A") {
    simulatePress(onPressA);
  } else if (input == "B") {
    simulatePress(onPressB);
  }
  return 0;
}
