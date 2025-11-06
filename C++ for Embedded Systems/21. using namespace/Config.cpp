#include <iostream>
using namespace std;

namespace Config {
int baudRate = 9600;
int threshold = 50;
} // namespace Config

int main() {
  // your code here: add using namespace statement
  using namespace Config;
  // your code here: print baudRate and threshold
  cout << "Baud: " << baudRate << ", Threshold: " << threshold << endl;
  return 0;
}
