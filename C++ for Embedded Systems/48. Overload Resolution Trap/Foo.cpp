#include <iostream>
using namespace std;

void foo(int x) { cout << "int overload\n"; }

void foo(int *p) { cout << "int* overload\n"; }

int main() {

  // your code here
  foo(nullptr);

  cout << 3.3 + NULL; // NULL: macro defined as 0

  return 0;
}
