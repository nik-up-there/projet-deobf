#include "tigress.h"
#include <stdio.h>  
#include <stdlib.h> 

int main() {
	int i = 1;
	long long fact = 1;
	int number = 3;
	while (i <= number) {
		fact = fact * i;
		i++;
	}
	printf("Factorial of %d is: %ld\n",number,fact);
	return 0;  
}
