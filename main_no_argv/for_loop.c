#include "tigress.h"
#include <stdio.h>
#include <stdlib.h> 

int main() {
	int i = 1;
	long long fact = 1;
	int number = 10;

	for(i=1; i <= number; i++){
		fact = fact * i;    
	}

	printf("Factorial of %d is: %ld\n",number,fact);    
	return 0;  
}
