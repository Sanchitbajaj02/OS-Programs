#include <stdio.h>

int main()
{
  int count1 = 0, count2 = 0, flag = 0, i, j;
  char string1[20], string2[20];

  printf("\n Enter 1st string: ");
  fgets(string1, sizeof(string1), stdin);
  printf("\n Enter 2nd string: ");
  fgets(string2, sizeof(string2), stdin);

  for (i = 0; string1[i] != '\0', string2[i] != '\0'; i++)
  {
    if (string1[i] == string2[i])
    {
      flag = 1;
    }
    else
    {
      flag = 0;
    }
  }
  if (flag == 1)
  {
    printf("\n Both strings are equal");
  }
  else
  {
    printf("\n Both strings are equal");
  }
  return 0;
}