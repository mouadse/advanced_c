#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// some simple functions

void printOne(int num) { printf("%d\n", num); }

void printTwo(int num) { printf("%d\n", num * 2); }

void printThree(int num) { printf("%d\n", num * 3); }

void printFour(int num) { printf("%d\n", num * 4); }

typedef void (*function)(int);

void printer(int num, void (*func)(int)) { func(num); }

int main(void) {
  // code goes here
  function funcs[4] = {printOne, printTwo, printThree, printFour};
  for (int i = 0; i < 4; i++) {
    funcs[i](1);
  }
  printf("------------------\n");
  printer(1337, printOne);
  return (EXIT_SUCCESS);
}
