#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(int argc, char const *argv[])
{
  int pid;
  pid = fork();
  if (pid > 0)
  {
    printf("Parent process ID PID is: %d\n", pid);
  }
  return 0;
}
