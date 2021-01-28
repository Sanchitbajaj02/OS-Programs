#include <stdio.h>

int main()
{
  int num1, num2, num3, large, small, sum;
  int arr[5] = {40, 50, 30, 60, 70};
  float avg;
  printf("\n ++++Fruit Basket++++");
  printf("\n 1.Banana");
  printf("\n 2.Pear");
  printf("\n 3.Apple");
  printf("\n 4.Orange");
  printf("\n 5.Kiwi");

  printf("\n Enter 1st selection: ");
  scanf("%d", &num1);
  printf("\n Enter 2nd selection: ");
  scanf("%d", &num2);
  printf("\n Enter 3rd selection: ");
  scanf("%d", &num3);

  sum = arr[num1 - 1] + arr[num2 - 1] + arr[num3 - 1];
  avg = sum / 3;

  large = small = arr[num1 - 1];

  if (arr[num2 - 1] > large && arr[num2 - 1] > arr[num3 - 1])
  {
    large = arr[num2 - 1];
  }
  else if (arr[num3 - 1] > large)
  {
    large = arr[num3 - 1];
  }

  if (arr[num2 - 1] < small && arr[num2 - 1] < arr[num3 - 1])
  {
    small = arr[num2 - 1];
  }
  else if (arr[num3 - 1] < small)
  {
    small = arr[num3 - 1];
  }

  printf("\n Total: %d", sum);
  printf("\n Average: %f", avg);
  printf("\n Largest: %d", large);
  printf("\n Smallest: %d", small);

  return 0;
}
