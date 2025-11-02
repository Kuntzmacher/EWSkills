#include <iostream>
using namespace std;

class Device {
public:
    int id;
};

int main() {
    Device dev;
    dev.id = 101;
    cout << "Device ID: " << dev.id;
    return 0;
}
