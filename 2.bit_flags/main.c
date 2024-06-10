#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void printer(char *str) {
  if (!str)
    return;
  write(STDOUT_FILENO, str, strlen(str));
}

int main(void) {
  char *name = NULL;
  printer(name);
  return (EXIT_SUCCESS);
}
