#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int calc(int a, int b) {
  int ans = a + b;
  return (ans);
}

// the function type of calc is int *(int , int);

int main(void) {

  int (*f)(int, int) = calc;

  printf("%d\n", f(12, 10));

  return (EXIT_SUCCESS);
}
