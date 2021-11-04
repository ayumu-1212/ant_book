#include "linkage.h"
#include <iostream>

namespace {
  int x = 50;
}

void Print() {
  std::cout << x << std::endl;
}
