#include <iostream>
using namespace std;

namespace Communication {
namespace I2C {
int speed = 400000; // 400 kHz
}
} // namespace Communication

int main() {
  // your code here: create alias CI for Communication::I2C
  namespace CI = Communication::I2C;
  // your code here: print speed using CI
  cout << "I2C Speed: " << CI::speed << endl;
  return 0;
}
