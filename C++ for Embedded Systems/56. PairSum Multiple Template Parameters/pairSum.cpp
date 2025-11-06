#include <iostream>
using namespace std;

// your code here: define template<typename A, typename B> auto pairSum(A a, B
// b) -> decltype(a+b)
template <typename T, typename U> auto pairSum(T a, U b) { return (a + b); }

int main() {
  double a, b;
  cin >> a >> b;
  cout << pairSum(a, b) << "\n";
  return 0;
}
