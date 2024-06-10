#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int compare(const void *x1, const void *x2) {
  return (*(int *)x1 - *(int *)x2);
}

int main(void) {
  int numbers[] = {23, 2, 3, 12, -32, 0, 4, 234, 543, 2332};

  qsort(numbers, 10, sizeof(int), compare);

  for (int i = 0; i < 10; i++) {
    printf("%d\n", numbers[i]);
  }
  return (EXIT_SUCCESS);
}
