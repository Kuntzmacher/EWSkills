#include <iostream>
using namespace std;

// your code here: declare namespace A with int threshold=50
namespace A {
int threshold = 50;
}
// your code here: declare namespace B with int threshold=75
namespace B {
int threshold = 75;
}

int main() {
  cout << "A.threshold=" << A::threshold << "\n";
  cout << "B.threshold=" << B::threshold << "\n";
  return 0;
}
