#include "powi.h"

int powi(int base, unsigned int exp) {
  if (exp == 0) {
    return 1;
  }

  int ret = base;

  for (unsigned int i = 2; i <= exp; ++i) {
    ret *= base;
  }

  return ret;
}

