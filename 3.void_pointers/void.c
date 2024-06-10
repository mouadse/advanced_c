#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void map(void *xs, size_t n, size_t size, void (*f)(void *)) {
  uint8_t *xs_as_bytes = (uint8_t *)xs;
  for (size_t i = 0; i < n; i++)
    f(&xs_as_bytes[i * size]);
}

void sqr(void *x) {
  int *p = x;
  *p = *p * *p;
}

int main(void) {
  int xs[4] = {
      1,
      2,
      3,
      4,
  };

  int size = sizeof(xs) / sizeof(xs[0]);
  for (int i = 0; i < size; i++) {
    printf("%d ", xs[i]);
  }
  printf("\n");

  map(xs, size, sizeof(int), sqr);

  for (int i = 0; i < size; i++) {
    printf("%d ", xs[i]);
  }

  return (EXIT_SUCCESS);
}
