#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
  char data[128];
  int file = open("newfile.txt", O_RDONLY);
  if (file < 0)
  {
    return -1;
  }
  if (read(0, data, 128) < 0)
  {
    write(2, "An error occured int the read.\n", 31);
  }
  exit(0);
  return 0;
}
