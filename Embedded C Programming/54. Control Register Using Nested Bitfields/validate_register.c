#include <stdio.h>

typedef union {
  unsigned char reg;
  struct {
    unsigned char enable : 1;
    unsigned char mode : 1;
    unsigned char priority : 2;
    unsigned char reserved : 4;
  } bits;
} ControlRegister;

// Write your logic here
int validate_register(ControlRegister *ctrl) {

  if ((ctrl->bits.enable != 1) || (ctrl->bits.priority > 2) ||
      (ctrl->bits.reserved != 0)) {
    return 0;
  }

  return 1;
}

int main() {
  ControlRegister ctrl;
  scanf("%hhx", &ctrl.reg);

  int result = validate_register(&ctrl);
  printf("%d", result);

  return 0;
}
