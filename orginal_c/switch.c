#include "tigress.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
  int i = 1;
  long long fact = 1;
  int number = 3;
  switch(i){
    case 1:
      fact = fact * i;
      break;
    case 2:
      fact = fact * i;
      break;
    case 3:
      fact = fact * i;
      break;
  }
  printf("Factorial of %d is: %ld\n",number,fact);
  return 0;
}
