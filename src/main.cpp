#include <iostream>

#include "comb.h"
#include "powi.h"

int main() {
  std::cout << "hello" << std::endl;

  {
    uint64_t n = 19;
    uint64_t m = 5;
    uint64_t c = comb(n, m);

    std::cout << "comb(" << n << ", " << m << ") = " << c << std::endl;
  }

  std::cout << "===================================" << std::endl;

  int a = 3;
  int b = 2;
  int n = 10;

  std::cout << " a = " << a 
            << " b = " << b
            << " n = " << n << std::endl;

  int A1 = powi(a + b, n);
  std::cout << "A1 = powi(a + b, n) = " << A1 << std::endl;

  int B1 = 0;
  for (int m = 0; m <= n; ++m) {
    B1 += comb(n,m) * powi(a, n - m) * powi(b, m);
  }
  std::cout << "B1 = " << B1 << std::endl;

  int B2 = 0;
  for (int m = 0; m <= n - 1; ++m) {
    B2 += comb(n - 1, m) * powi(a, n - m)     * powi(b, m);
    B2 += comb(n - 1, m) * powi(a, n - 1 + m) * powi(b, m + 1);
  }
  std::cout << "B2 = " << B2 << std::endl;
  
  return 0;
}

