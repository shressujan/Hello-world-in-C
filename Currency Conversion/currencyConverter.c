#include<stdlib.h>
#include<stdio.h>

int main(int argc, char ** argv) {

  float amount = 0.0;
  float net_amount = 0.0;
  float british_amount = 0.0;
  float japanese_amount = 0.0;
  printf("%s\n", "Input the amount of US dollars ");
  //&variable is used to get the memory address of that varaible
  scanf("%f", &amount);

  net_amount = 0.9 * amount;
  british_amount = 0.6 * net_amount / 2;
  japanese_amount = 76.8 * net_amount / 2;
  printf("The british_amount is: %.2f and the japanese_amount is: %.2f\n", british_amount, japanese_amount);

  return 0;
}
