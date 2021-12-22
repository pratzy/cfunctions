#include <stdio.h>
#include <stdlib.h>

void exit_handler(void) { printf("BYE!!!\n"); }

int main(int argc, char const *argv[]) {
  atexit(&exit_handler);

  /**
   * @brief Memory
   *
   */

  // allocate block of memory
  char **dynamic_str_1 = (char **)malloc(sizeof(char) * 8);
  if (dynamic_str_1 != NULL) {
    *dynamic_str_1 = "1234567";
    printf("dynamic_str_1: %s\n", *dynamic_str_1);
  }

  // allocate block of memory and zero-out the bytes
  char **dynamic_str_2 = (char **)calloc(8, sizeof(char));
  *dynamic_str_2 = "12";

  // resize the allocated block of memory
  dynamic_str_2 = (char **)realloc(dynamic_str_2, sizeof(char) * 3);
  printf("dynamic_str_2: %s\n", *dynamic_str_2);

  // free the pointers
  free(dynamic_str_1);
  free(dynamic_str_2);

  /**
   * @brief Environment Variables
   *
   */

  char *env_path = getenv("PATH");
  printf("PATH: %s\n", env_path);

  if ((system("ls -l") == 0)) {
    printf("Executed long list\n");
  }
}
