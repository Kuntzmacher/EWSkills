#include <iostream>
using namespace std;

namespace MathOps {
int x = 10;
int square(int n) { return n * n; }
} // namespace MathOps

int main() {
  // your code here: print MathOps::x
  // your code here: call MathOps::square(x) and print result
  cout << "x=" << MathOps::x << endl
       << "Square=" << MathOps::square(MathOps::x) << endl;
  return 0;
}
