#include <iostream>
using namespace std;

// your code here: define incrementPtr(int* x)
void incrementPtr(int *x) { (*x)++; }

// your code here: define incrementRef(int& x)
void incrementRef(int &x) { x++; }

int main() {
  int n;
  cin >> n;

  int a = n;
  incrementPtr(&a);
  cout << "After incrementPtr: " << a << "\n";

  int b = n;
  incrementRef(b);
  cout << "After incrementRef: " << b;

  return 0;
}
