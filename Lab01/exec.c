#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
  char *args[] = {"./EXEC", NULL};
  execvp(args[0], args);
  printf("Sanchit \n 2K19CSUN01108 \n CSE 4B");
  return 0;
}
