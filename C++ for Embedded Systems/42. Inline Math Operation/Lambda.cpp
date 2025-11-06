#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  // your code here: define a lambda named square
  auto square = [](int x) -> int { return x * x; };
  cout << "Square=" << square(n);
  return 0;
}
