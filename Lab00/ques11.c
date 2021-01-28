#include <stdio.h>

int sum(int arr[], int n)
{
  int sum = 0, i;
  for (i = 0; i < n; i++)
  {
    sum += arr[i];
  }
  return sum;
}

int main()
{
  int arr[10], i, n = 10;
  int result = 0;
  printf("\n Enter array values: ");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  result = sum(arr, n);
  printf("\n Sum of arrays: %d", result);
  return 0;
}