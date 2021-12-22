#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char str1[] = "My name is C";
  char str2[strlen(str1) + 1];

  strcpy(str2, str1);

  printf("%s\n", str2);

  // strtok
  char some_csv_str[] = "John,Doe,Web Developer";
  char delim[] = ",";

  char *token = strtok(some_csv_str, delim);

  while (token) {
    printf("Next token: %s\n", token);

    // Pass NULL pointer in order to keep parsing the remaining string.
    token = strtok(NULL, delim);

    // Null terminator will be returned finally and the loop will exit.
  }

  // strcat
  char first_name[] = "John";
  char last_name[] = "Doe";

  char *full_name = (char *)malloc(
      sizeof(char) * (strlen(first_name) + strlen(last_name) + 1));
  strcat(full_name, first_name);
  strcat(full_name, last_name);
  printf("After using strcat, full_name is %s\n", full_name);
  free(full_name);

  // strstr
  char haystack[] = "35=1|15=ABC|49=34.54";
  char original_haystack[strlen(haystack) + 1];

  // Copy haystack in original_haystack as tokenization is destructive.
  strcpy(original_haystack, haystack);
  char haystack_delim[] = "|";
  printf("Haystack: %s\n", haystack);

  char needle[8];
  printf("What do you want to search in haystack?: ");
  scanf("%s", &needle);
  char *tokenized_haystack = strtok(haystack, haystack_delim);

  bool is_found = false;
  while (tokenized_haystack) {
    char *found = strstr(tokenized_haystack, needle);
    if (found) {
      is_found = true;
      fprintf(stdout, "Found %s\n", found);
    }
    tokenized_haystack = strtok(NULL, haystack_delim);
  }
  if (!is_found) {
    fprintf(stdout, "Could not find %s in %s\n", needle, original_haystack);
  }
}
