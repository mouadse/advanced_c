#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define ARRAY_SIZE(a) (sizeof(a) / sizeof(a[0]))

int main(void) {
  // int num = 1337;
  int xs[] = {
      0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
  };

  int *ptr = xs;

  printf("The size of our array is %zu\n", ARRAY_SIZE(xs));
  // printf("The size of our array is %zu\n",
  //        ARRAY_SIZE(ptr)); // This is not applicable for a pointer address

  printf("The size of our pointer is %zu\n", sizeof(ptr));
  return (EXIT_SUCCESS);
}
