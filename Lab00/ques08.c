#include <stdio.h>

int main()
{
  int i, n, num, pos, arr[20];
  printf("\n Enter the array size: ");
  scanf("%d", &n);
  printf("\n Enter elements in array: \n");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("\n Enter the number to be insert: ");
  scanf("%d", &num);
  printf("\n Enter position to place in array: ");
  scanf("%d", &pos);

  for (i = n; i >= pos; i--)
  {
    arr[i + 1] = arr[i];
  }
  arr[pos - 1] = num;
  n++;

  printf("\n Array after insertion: \n");
  for (i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  return 0;
}