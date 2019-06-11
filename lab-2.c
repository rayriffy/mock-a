#include <stdio.h>

int main () {
  float price;
  float discount;

  printf("What price is this item?: ");
  scanf("%f", &price);

  printf("What its discount rate? (0 - 100): ");
  scanf("%f", &discount);

  printf("Total price is: %.2f\n", price * (1 - (discount / 100)));
}