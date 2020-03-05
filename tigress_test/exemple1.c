#include "tigress.h"
#include <stdio.h>  

int main(int fact) {    
	int i=1;  
	int number=fact;
	for(i=1; i <= number; i++) {    
		fact=fact*i;
	}    
	printf("Factorial of %d is: %d",number,fact);    
	return 0;  
}

