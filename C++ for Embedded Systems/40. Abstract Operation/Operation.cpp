#include <iostream>
#include <string>
using namespace std;

class Operation {
public:
  // your code here: declare pure virtual function apply
  virtual int apply(int x) const = 0;
};

class SquareOp : public Operation {
public:
  int apply(int x) const override { return x * x; }
};

class CubeOp : public Operation {
public:
  int apply(int x) const override { return x * x * x; }
};

int main() {
  int n;
  string opName;
  cin >> n >> opName;
  Operation *op = nullptr;
  if (opName == "square") {
    op = new SquareOp();
  } else if (opName == "cube") {
    op = new CubeOp();
  }
  if (op) {
    cout << op->apply(n);
    delete op;
  }
  return 0;
}
