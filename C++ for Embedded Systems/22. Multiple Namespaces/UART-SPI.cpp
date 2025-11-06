#include <iostream>
using namespace std;

// your code here: declare namespace UART with int baudRate=115200
namespace UART {
int baudRate = 115200;
}
// your code here: declare namespace SPI with int clockSpeed=1000000
namespace SPI {
int clockSpeed = 1000000;
}

int main() {
  cout << "UART Baud: " << UART::baudRate << "\n";
  cout << "SPI Clock: " << SPI::clockSpeed << "\n";
  return 0;
}
