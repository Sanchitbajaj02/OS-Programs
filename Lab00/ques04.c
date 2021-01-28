#include <stdio.h>
#include <ctype.h>
int main()
{
  char x;
  printf("\n Enter the character: ");
  scanf("%c", &x);

  if ((x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') || (x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U'))
  {
    printf("\n Character %c is vowel\n", x);
  }
  else
  {
    printf("\n Character %c is not vowel\n", x);
  }
  return 0;
}