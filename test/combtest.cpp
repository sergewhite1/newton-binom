#include <cstdlib>

#include "../src/comb.h"

typedef int (*TestCaseProc)();

int TestCase1() {
  uint64_t c = comb(19, 5);
  if (c == 11628) {
    return 0;
  }
  return 1;
}

static const TestCaseProc TestCases[] = {nullptr, TestCase1};


int main(int argc, char* argv[]) {
  if (argc <= 1) {
    return 1;
  }

  int p = atoi(argv[1]);

  return TestCases[p]();
}
