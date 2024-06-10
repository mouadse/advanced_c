#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef enum { FLAG_A = (1 << 0), FLAG_B = (1 << 1), FLAG_C = (1 << 2) } t_flag;

void f(int x, t_flag flags) {
  if (flags & FLAG_A) {
    printf("Flag A detected !!!\n");
  }

  if (flags & FLAG_B) {
    printf("Flag B detected !!!\n");
  }

  if (flags & FLAG_C) {
    printf("Flag C detected !!!\n");
  }
  (void)x;
}

int main(void) {
  f(1337, FLAG_C | FLAG_A | FLAG_B);
  return (EXIT_SUCCESS);
}
