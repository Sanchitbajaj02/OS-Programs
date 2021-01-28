#include <stdio.h>
#include <sys/types.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>

int main(int argc, char const *argv[])
{
  int fd;
  if (2 != argc)
  {
    printf("\n Usage: ");
  }
  errno = 0;
  fd = open(argv[1], O_RDONLY);
  if (-1 == fd)
  {
    printf("\n open() failed with error [%s]", strerror(errno));
    return 1;
  }
  else
  {
    printf("\n open() successful ");
  }
  return 0;
}
