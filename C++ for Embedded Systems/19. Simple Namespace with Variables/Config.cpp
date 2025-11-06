#include <iostream>
using namespace std;

namespace Config {
// your code here: declare int baudRate=9600 and int threshold=50
int baudRate = 9600;
int threshold = 50;
} // namespace Config

int main() {
  cout << "Baud: " << Config::baudRate << ", Threshold: " << Config::threshold;
  return 0;
}
