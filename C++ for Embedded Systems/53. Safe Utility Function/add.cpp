#include <iostream>
using namespace std;

// your code here: define int add(int a, int b) noexcept
int add(int a, int b) noexcept { return a + b; }

int main() {
  int x, y;
  cin >> x >> y;
  cout << "Result: " << add(x, y) << "\n";
  return 0;
}
