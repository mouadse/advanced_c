#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void print_name(char *str) {
  if (!str)
    return;
  printf("Hello %s\n", str);
}

void some_magic(void *xs, size_t n, size_t size, void (*func)(char *)) {
  char(*names)[size] = xs;
  for (size_t i = 0; i < n; i++) {
    func(names[i]);
  }
}

int main(void) {
  // code goes here
  char names[4][20] = {"Mouad", "Ahmed", "Omar", "Ali"};
  size_t size = sizeof(names) / sizeof(names[0]);
  some_magic(names, size, sizeof(names[0]), print_name);
  return (EXIT_SUCCESS);
}
