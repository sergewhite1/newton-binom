#include <iostream>

#include "comb.h"

int main() {
  std::cout << "hello" << std::endl;

  uint64_t n = 19;
  uint64_t m = 5;
  uint64_t c = comb(n, m);

  std::cout << "comb(" << n << ", " << m << ") = " << c << std::endl;

  return 0;
}

