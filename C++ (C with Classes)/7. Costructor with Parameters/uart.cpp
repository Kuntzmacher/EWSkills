#include <iostream>
using namespace std;

class UART {
public:
  // your code here: define constructor with parameters baudRate and parity
  UART(int baudRate, char parity) {
    cout << "UART initialized with baud=" << baudRate << ", parity=" << parity
         << endl;
  }
};

int main() {
  UART u(9600, 'N');
  return 0;
}
