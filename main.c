// Author: Danielle Alamo dca5244@psu.edu
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int digit_sum(int n){ 
  if(n==0){return 0;}
  return(n % 10 + digit_sum(n / 10));
}

int main(void) {
  int number;
  printf("Enter an int: ");
  scanf("%d",& number);
  printf("The of digits of %d is %d.", number, digit_sum(number)); 
  return 0;
  } 