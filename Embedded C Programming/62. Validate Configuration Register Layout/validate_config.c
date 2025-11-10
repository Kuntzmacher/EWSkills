#include <stdio.h>

typedef struct {
  unsigned short reg;
} ConfigRegister;

int validate_config(ConfigRegister *cfg) {
  // Write logic using pointer access
  if (((cfg->reg & 0b1) == 0b1) && (((cfg->reg >> 2) & 0b11) != 0b11) &&
      ((cfg->reg >> 4) == 0)) {
    return 1;
  }

  return 0;
}

int main() {
  ConfigRegister cfg;
  scanf("%hx", &cfg.reg);

  int result = validate_config(&cfg);
  printf("%d", result);

  return 0;
}
