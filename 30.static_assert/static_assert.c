#include <assert.h>
#include <stdlib.h>
#include <unistd.h>

#define NUM 1337

int main(void) {
  static_assert(NUM == 1337, "Not leet fix it !!!");

  return (EXIT_SUCCESS);
}
