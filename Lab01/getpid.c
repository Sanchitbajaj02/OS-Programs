#include <stdio.h>
#include <unistd.h>

int main()
{
  int pid;
  pid = fork();
  if (pid == 0)
  {
    printf("\nChild process");
    printf("\nChild process id: %d", getpid());
    printf("\nParent process id: %d", getppid());
    sleep(5);
    printf("\nChild process after sleep=5");
    printf("\nChild process id: %d", getpid());
    printf("\nParent process id: %d", getppid());
  }
  else
  {
    printf("\nParent process");
    sleep(10);
    printf("\nChild process id: %d", getpid());
    printf("\nParent process id: %d", getppid());
    printf("\nParent Teminates");
  }
  return 0;
}