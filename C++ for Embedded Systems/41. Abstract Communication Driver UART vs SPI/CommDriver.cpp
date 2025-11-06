#include <iostream>
#include <string>
using namespace std;

class CommDriver {
public:
  // your code here: declare pure virtual functions

  // void send(const string& data)
  virtual void send(const string &data) = 0;

  // string receive()
  virtual string receive() = 0;

  virtual ~CommDriver() = default;
};

class UartDriver : public CommDriver {
private:
  string last;

public:
  void send(const string &data) override {
    last = data;
    cout << "UART SEND: " << data << "\n";
  }
  string receive() override { return string("UART RECV: ") + last; }
};

class SpiDriver : public CommDriver {
private:
  string last;

public:
  void send(const string &data) override {
    last = data;
    cout << "SPI SEND: " << data << "\n";
  }
  string receive() override { return string("SPI RECV: ") + last; }
};

int main() {
  string type, msg;
  cin >> type >> msg;
  CommDriver *d = nullptr;
  if (type == "UART") {
    d = new UartDriver();
  } else if (type == "SPI") {
    d = new SpiDriver();
  }
  if (d) {
    d->send(msg);
    cout << d->receive();
    delete d;
  }
  return 0;
}
