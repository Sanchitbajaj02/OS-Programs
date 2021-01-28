#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
int main(void)
{
  int file = open("newfile.txt", O_WRONLY | O_APPEND);

  if (file < 0)
  {
    return -1;
  }
  if (write(file, "\nThis will be output to newfile.txt\n", 36) != 36)
  {
    write(2, "There was an error writing to newfile.txt \n", 43);
    return -1;
  }
}