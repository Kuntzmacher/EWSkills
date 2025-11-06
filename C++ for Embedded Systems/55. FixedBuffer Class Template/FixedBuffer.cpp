#include <iostream>
#include <vector>
using namespace std;

template <typename T, size_t N> class FixedBuffer {

  // your code here
private:
  int max = N;
  int count;
  vector<int> vec;

public:
  FixedBuffer() { count = 0; }

  void push(T v) {
    if (count < max) {
      count++;
      vec.push_back(v);
    }
  }

  size_t size() const { return count; }

  T operator[](size_t i) const { return vec[i]; }
};

int main() {
  int n;
  cin >> n;
  FixedBuffer<int, 10> buf; // max 10 elements
  for (int i = 0; i < n; i++) {
    int v;
    cin >> v;
    buf.push(v);
  }
  cout << "Buffer size: " << buf.size() << "\n";
  for (size_t i = 0; i < buf.size(); i++) {
    cout << buf[i] << " ";
  }
  cout << "\n";
  return 0;
}
