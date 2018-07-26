
#include <stdio.h>
#include <stdlib.h>
#include <editline/readline.h>

int main(int argc, char** argv){

  puts("Welcome to lispy v.0.1.0. Press Ctrl+c to quit.");
  
  while(1){

    /* readline is just a replacement for fgets, but I'm not sure how we're allowed not to declare the variable beforehand. */
    char* input = readline("lispy> ");

    add_history(input);

    printf("Echo: %s\n", input);

    /* void free(void *ptr) deallocates the memory previously allocated to a call to calloc, malloc, or realloc. */
    free(input);

  }

  return 0;

}
