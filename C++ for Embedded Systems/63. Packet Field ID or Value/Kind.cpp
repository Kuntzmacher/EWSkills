#include <cstdint>
#include <iostream>
#include <string>
using namespace std;

// your code here: define enum class Kind and struct Packet with tagged union
enum class Kind {
  Id,
  Value,
};
struct Packet {
  Kind kind;
  union {
    uint16_t id;
    int32_t value;
  };
};

int main() {
  string type;
  int num;
  cin >> type >> num;
  Packet p;
  if (type == "Id") {
    p.kind = Kind::Id;
    p.id = (uint16_t)num;
  } else if (type == "Value") {
    p.kind = Kind::Value;
    p.value = num;
  }
  if (p.kind == Kind::Id) {
    cout << "ID=" << p.id;
  } else if (p.kind == Kind::Value) {
    cout << "VALUE=" << p.value;
  }
  return 0;
}
