#include <stdio.h>
#include <process.h>

int main()
{
  printf("\n Beginning line of program...");
  printf("\n Line before exit() in program...");
  exit(0);
  printf("\n Line after exit() in program...");
  return 0;
}