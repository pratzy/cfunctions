#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]) {

  FILE *test_file = fopen("/tmp/stdio_test_file.txt", "w+");

  /**
   * @brief Formatted I/O
   *
   */
  int max_str_len = 50;
  char scan_str_1[max_str_len], scan_str_2[max_str_len];
  int my_fav_num, user_fav_num;

  char my_formatted_str[max_str_len];

  fprintf(test_file, "Favourite number: %d\n", 10);

  // Move to the beginning of the file
  rewind(test_file);

  fscanf(test_file, "%s %s %d", scan_str_1, scan_str_2, &my_fav_num);

  printf("Here is my favorite number read from 'fscanf': %d\n", my_fav_num);

  /**
   * File operations
   *
   */

  fclose(test_file);

  freopen("/tmp/stdio_test_file.txt", "w+", test_file);

  fclose(test_file);

  FILE *new_file = fopen("/tmp/new_file.txt", "w+");

  char str_buf[2];
  memset(str_buf, '\0', sizeof(str_buf));

  // set a buffer on stdout
  setvbuf(stdout, str_buf, _IOFBF, sizeof(str_buf));
  fprintf(stdout, "Printing to buffer\n");

  // flush the contents of buffer to stdout
  fflush(stdout);

  // reset buffer
  setvbuf(stdout, NULL, _IONBF, 0);

  fclose(new_file);
}
