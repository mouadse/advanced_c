#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int calc(int a, int b) {
  int ans = a + b;
  return (ans);
}

bool p(int num) { return (num % 2 == 0); }

void print_if(int xs[10], bool (*predicate)(int)) {
  int i = 0;

  while (i < 10) {
    if (predicate(xs[i]))
      printf("%d\n", xs[i]);
    i++;
  }
}

int main(void) {

  // int (*f)(int, int) = calc;
  // printf("%d\n", f(12, 10));

  int *numbers = malloc(sizeof(int) * 10);
  if (!numbers)
    return (perror("Malloc Failed!!!"), EXIT_FAILURE);

  return (EXIT_SUCCESS);
}
