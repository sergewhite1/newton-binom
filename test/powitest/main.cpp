
#include <cstdlib>

#include "../../src/powi.h"

typedef int (*TestCaseProc)();

int TestCase1() {
  int a = powi(2, 3);
  if (a == 8) {
    return 0;
  }
  return 1;
}

int TestCase2() {
  int a = powi(100, 0);
  if (a == 1) {
    return 0;
  }
  return 1;
}

int TestCase3() {
  int a = powi(20, 1);
  if (a == 20) {
    return 0;
  }
  return 1;
}

static const TestCaseProc TestCases[] = {nullptr, TestCase1, TestCase2,
  TestCase3};

int main(int argc, char* argv[]) {
  if (argc <= 1) {
    return 1;
  }

  int p = atoi(argv[1]);

  return TestCases[p]();
}
