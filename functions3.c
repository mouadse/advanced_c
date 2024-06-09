#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// some simple functions

void printOne(int num) { printf("%d\n", num); }

void printTwo(int num) { printf("%d\n", num * 2); }

void printThree(int num) { printf("%d\n", num * 3); }

void printFour(int num) { printf("%d\n", num * 4); }

typedef void (*function)(int);

int main(void) {
  // code goes here
  return (EXIT_SUCCESS);
}
