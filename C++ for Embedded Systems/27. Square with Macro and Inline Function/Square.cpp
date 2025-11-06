#include <iostream>
using namespace std;

#define SQUARE(x) (x * x)

inline int square(int x) { return x * x; }

int main() {
  int n;
  cin >> n;
  // your code here: declare variables a and b, initialize with n
  int a = n;
  int b = n;
  // your code here: call macro and inline function using ++a and ++b
  a = SQUARE(++a);
  b = square(++b);
  // your code here: print results
  cout << "Macro Square: " << a << endl << "Inline Square: " << b << endl;
  return 0;
}
