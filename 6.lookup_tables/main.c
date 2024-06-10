#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// They are called designated initializers

enum dummy { dum_1 = 0, dum_2, dum_3 };

static int numbers[] = {10, 22, 23};

int main(void) {
  printf("The number is %d\n", numbers[dum_1]);
  printf("The number is %d\n", numbers[dum_2]);
  printf("The number is %d\n", numbers[dum_3]);
  return (EXIT_SUCCESS);
}
