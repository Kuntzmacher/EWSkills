#include <iostream>
#include <string>
using namespace std;

int square(int x) { return x * x; }
int cube(int x) { return x * x * x; }

// your code here: define apply(int, function pointer)
void apply(int x, int (*op)(int)) { cout << op(x); }

int main() {
  int n;
  string opName;
  cin >> n >> opName;
  if (opName == "square") {
    apply(n, square);
  } else if (opName == "cube") {
    apply(n, cube);
  }
  return 0;
}
