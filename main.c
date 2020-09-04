//Author: Cole D. Black-Stallard cdb5655@psu.edu
//Collaborators: NONE

#include <stdio.h>
#include <readline/readline.h>

int main(void) {
  char *name = readline("Enter your name: ");
  printf("Hello, %s!\n",name);
  return 0;
}