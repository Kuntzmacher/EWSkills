#include <iostream>
using namespace std;

// your code here: define swapPtr(int* a, int* b)
void swapPtr(int *a, int *b) {
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

// your code here: define swapRef(int& a, int& b)
void swapRef(int &a, int &b) {
  int temp;
  temp = a;
  a = b;
  b = temp;
}

int main() {
  int x, y;
  cin >> x >> y;
  int a = x, b = y;
  swapPtr(&a, &b);
  cout << "After swapPtr: a=" << a << " b=" << b << "\n";
  int c = x, d = y;
  swapRef(c, d);
  cout << "After swapRef: a=" << c << " b=" << d;
  return 0;
}
