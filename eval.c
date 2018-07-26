
#include <stdio.h>

static char input[2048];

int main(int argc, char** argv){

  puts("Welcome to Lispy v.0.0.0.2. Press Ctrl+c to quit.");

  while(1){

    fputs("lispy> ", stdout);

    fgets(input, 2048, stdin);

    printf("echo: %s", input);

  }

  return 0;

}
