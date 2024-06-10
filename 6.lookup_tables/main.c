#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// They are called designated initializers

enum dummy { dum_1 = 0, dum_2, dum_3 };

static int numbers[] = {10, 22, 23};

static char case_converter[] = {['a'] = 'A', ['b'] = 'B', ['c'] = 'C'};

int main(void) {
  printf("The number is %d\n", numbers[dum_1]);
  printf("The number is %d\n", numbers[dum_2]);
  printf("The number is %d\n", numbers[dum_3]);

  // the second example is our case but we will limted to the 3 first alphas
  char abc[] = "abc";
  char *ptr = abc;

  printf("Before the case converter: %s\n", ptr);

  while (*ptr != '\0') {
    *ptr = (char)case_converter[(unsigned char)*ptr];
    ptr++;
  }
  printf("After the case converter: %s\n", abc);
  return (EXIT_SUCCESS);
}
