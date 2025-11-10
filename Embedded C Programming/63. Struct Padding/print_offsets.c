#include <stdio.h>

typedef struct {
  char a;
  int b;
  short c;
} MyStruct;

void print_offsets() {

  size_t oa, ob, oc, ot;

  MyStruct var;

  oa = (size_t)((char *)&var.a - (char *)&var);
  printf("Offset of a: %zu\n", oa);

  ob = (size_t)((char *)&var.b - (char *)&var);
  printf("Offset of b: %zu\n", ob);

  oc = (size_t)((char *)&var.c - (char *)&var);
  printf("Offset of c: %zu\n", oc);

  ot = sizeof(var);
  printf("Size: %zu", ot);
}

int main() {
  print_offsets();
  return 0;
}
