#include <stdio.h>

int main()
{
  int quantity = 0;
  float rate, discount, tax, total;
  rate = discount = tax = total = 0.0;

  printf("\n Quantity sold: ");
  scanf("%d", &quantity);
  printf("\n Rate: ");
  scanf("%f", &rate);
  printf("\n Discount: ");
  scanf("%f", &discount);
  printf("\n Tax: ");
  scanf("%f", &tax);

  int totalRate = quantity * rate;

  total = ((totalRate * discount) / 100) + ((totalRate * tax) / 100);
  printf("\n Total: %f \n", total);
  return 0;
}