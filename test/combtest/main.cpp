#include <cstdlib>

#include "../../src/comb.h"

typedef int (*TestCaseProc)();

int TestCase1() {
  uint64_t c = comb(19, 5);
  if (c == 11628) {
    return 0;
  }
  return 1;
}

int TestCase2() {
  uint64_t c = comb(19, 17);
  if (c == 171) {
    return 0;
  }
  return 1;
}


int TestCase3() {
  uint64_t c = comb(0, 0);
  if (c == 1) {
    return 0;
  }
  return 1;
}

int TestCase4() {
  uint64_t c = comb(5, 0);
  if (c == 1) {
    return 0;
  }
  return 1;
}

int TestCase5() {
  uint64_t c = comb(5, 5);
  if (c == 1) {
    return 0;
  }
  return 1;
}
static const TestCaseProc TestCases[] = {nullptr, TestCase1, TestCase2, 
  TestCase3, TestCase4, TestCase5};


int main(int argc, char* argv[]) {
  if (argc <= 1) {
    return 1;
  }

  int p = atoi(argv[1]);

  return TestCases[p]();
}
