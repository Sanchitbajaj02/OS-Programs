#include <stdio.h>

void fib(int n)
{
  static int n1 = 0, n2 = 1, n3;
  if (n > 0)
  {
    n3 = n1 + n2;
    n1 = n2;
    n2 = n3;
    printf("%d ", n3);
    fib(n - 1);
  }
}

int main()
{
  int num;
  printf("\n Enter the number of elements: ");
  scanf("%d", &num);
  printf("\n Fibonacci Series: \n");
  printf("%d %d ", 0, 1);
  fib(num - 2);
  printf("\n");
  return 0;
}