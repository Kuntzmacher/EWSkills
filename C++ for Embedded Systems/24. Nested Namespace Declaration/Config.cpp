#include <iostream>
using namespace std;

namespace Config {

namespace ADC {
int resolution = 12;
}

namespace PWM {
int frequency = 1000;
}

} // namespace Config

int main() {
  // your code here: print resolution and frequency with their namespace paths
  cout << "ADC.resolution=" << Config::ADC::resolution << endl
       << "PWM.frequency=" << Config::PWM::frequency << endl;
  return 0;
}
