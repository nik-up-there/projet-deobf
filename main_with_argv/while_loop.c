#include "tigress.h"
#include <stdio.h>  
#include <stdlib.h> 

int main(int argc, char *argv[]) {
	int i = 1;
	long long fact = 1;
	int number = atoi(argv[1]);

	while (i <= number) {
		fact = fact * i;
		i++;
	}

	printf("Factorial of %d is: %ld\n",number,fact);
	return 0;  
}
