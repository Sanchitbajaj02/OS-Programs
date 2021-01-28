#include <stdio.h>
#include <ctype.h>
int main()
{
  char x;
  printf("\n Enter the character: ");
  scanf("%c", &x);

  if (islower(x))
  {
    x = toupper(x);
    printf("\n Value of character entered: %c \n", x);
  }
  else
  {
    printf("\n Value of character entered: %c \n", x);
  }
  return 0;
}