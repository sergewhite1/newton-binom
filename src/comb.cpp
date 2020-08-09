#include <algorithm>
#include <cassert>

#include "comb.h"

uint64_t comb(uint64_t n, uint64_t m) {
  assert(n >= m);

  // TODO: zero values processing

  uint64_t mju = std::max(m, n-m);
  uint64_t p = 1;
  for (uint64_t k = mju + 1; k <= n; ++k) {
    p *= k;
  }

  uint64_t q = fact(std::min(m, n-m));

  return p / q;
}

uint64_t fact(uint64_t n) {
  if (n == 0) {
    return 1;
  }

  uint64_t ret = 1;

  for (uint64_t i = 2; i <= n; ++i) {
    ret *= i;
  }

  return ret;
}
