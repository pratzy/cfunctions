#include <stdio.h>
#include <stdlib.h>

void exit_handler(void) { printf("BYE\n"); }

int main(int argc, char const *argv[]) {
  atexit(&exit_handler);
  printf("Hello World!\n");
  return 0;
}
