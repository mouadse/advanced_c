#include <stdio.h>

/*

// This code refused to compile multiple times so let's just forget about for
now

int main() {
    int large_number = 1'000'000;
    printf("%d\n", large_number);
    return 0;
}
*/

int main() {
  int large_number = 100 /* thousand */ * 1000 /* thousand */;
  printf("%d\n", large_number);
  return 0;
}
