#include <stdio.h>

int main()
{
  int a, b;
  printf("\n Enter 2 numbers: ");
  scanf("%d %d", &a, &b);
  a = a + b;
  b = a - b;
  a = a - b;
  printf("\n Numbers after swapping: %d & %d \n", a, b);
  return 0;
}