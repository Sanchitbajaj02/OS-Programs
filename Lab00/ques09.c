#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}

int compare(const void *a, const void *b)
{
  return (*(int *)a - *(int *)b);
}

int main()
{
  int students[10][3] = {
      {92, 87, 99},
      {90, 74, 49},
      {62, 73, 71},
      {81, 77, 68},
      {100, 99, 98},
      {90, 80, 79},
      {94, 95, 96},
      {90, 98, 80},
      {80, 88, 70},
      {50, 50, 50},
  };
  int avg[10], sum, i, j;

  for (i = 0; i < 10; i++)
  {
    sum = 0;
    for (j = 0; j < 3; j++)
    {
      sum += students[i][j];
    }
    avg[i] = sum / 3;
  }

  qsort(avg, 10, sizeof(int), compare);

  printf("\n Student detail: ");
  for (i = 0; i < 10; i++)
  {
    printf("Student %d: ", i + 1);
    for (j = 0; j < 3; j++)
    {
      printf("%d  ", students[i][j]);
    }
    printf("\n");
  }

  printf("\n Sorted average marks: ");
  for (i = 0; i < 10; i++)
  {
    printf("%d  ", avg[i]);
  }

  return 0;
}