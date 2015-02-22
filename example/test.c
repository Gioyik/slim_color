#include <stdio.h>
#include <stdint.h>
#include "../src/color.h"

int main() {
  printf(Blue "hello" BoldWhite " world\n" Rewind);
  printf(Cyan "Sup" BoldCyan " guyz\n" Rewind);
  return 0;
}
