#include <iostream>
using namespace std;

class Distance; // forward declaration

class Point {
private:
  int x;

public:
  Point(int v) : x(v) {}
  // your code here: declare friend function sumValues
  friend void sumValues(const Point &, const Distance &);
};

class Distance {
private:
  int d;

public:
  Distance(int v) : d(v) {}
  // your code here: declare friend function sumValues
  friend void sumValues(const Point &, const Distance &);
};

// your code here: define friend function sumValues
void sumValues(const Point &p, const Distance &d) {
  cout << "Sum=" << p.x + d.d;
}

int main() {
  int a, b;
  cin >> a >> b;

  Point p(a);
  Distance dist(b);

  sumValues(p, dist);
  return 0;
}
