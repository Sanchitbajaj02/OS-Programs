#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

int main()
{
  DIR *dirp;
  struct dirent *direntp;
  dirp = opendir("E:\\OS_Programs\\Lab02");
  if (dirp == NULL)
  {
    perror("You can't open E:\\OS_Programs\\Lab02");
  }
  else
  {
    for (;;)
    {
      direntp = readdir(dirp);
      if (direntp == NULL)
        break;

      printf("%s\n", direntp->d_name);
    }
  }
  closedir(dirp);
  return 0;
}
