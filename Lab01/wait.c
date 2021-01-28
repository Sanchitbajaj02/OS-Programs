#include <stdio.h>
#include <unistd.h>
#include <process.h>
// #include <sys/wait.h>

int main()
{
  pid_t cpid;
  if (fork() == 0)
  {
    exit(0);
  }
  else
  {
    cpid = wait(NULL);
    printf("\n Parent pid: %d", getpid());
    printf("\n Child pid: %d", cpid);
  }
  return 0;
}