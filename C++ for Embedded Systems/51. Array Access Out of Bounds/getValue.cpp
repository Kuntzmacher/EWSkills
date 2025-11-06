#include <iostream>
#include <stdexcept>
#include <vector>
using namespace std;

// your code here: define getValue(const vector<int>& arr, int idx)
int getValue(const vector<int> &arr, int idx) {
  if ((idx < 0) || (idx > arr.size())) {
    throw out_of_range("Index out of range");
  } else {
    return arr[idx];
  }
}

int main() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  int idx;
  cin >> idx;
  try {
    int value = getValue(arr, idx);
    cout << "Value: " << value << "\n";
  } catch (const out_of_range &e) {
    cout << "Error: " << e.what() << "\n";
  }
  return 0;
}
