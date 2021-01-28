#include <stdio.h>

int main()
{
  int num, i;
  int flag = 0;
  printf("\n Enter a number: ");
  scanf("%d", &num);

  for (i = 2; i <= num / 2; i++)
  {
    if (num % i == 0)
    {
      flag = 1;
      break;
    }
  }

  if (num > 0)
  {
    if (num == 1)
    {
      printf("\n %d is neither prime nor composite \n", num);
    }
    else
    {
      if (flag == 0)
      {
        printf("\n %d is a prime number \n", num);
      }
      else
      {
        printf("\n %d is not a prime number \n", num);
      }
    }
  }
  else
  {
    printf("\n Number entered is invalid \n");
  }
  return 0;
}