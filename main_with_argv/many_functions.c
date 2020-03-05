#include "tigress.h"
#include <stdio.h>
#include <stdlib.h> 

void multiply(long long *factpointeur, int i) {
    *factpointeur *= i;
}

void ownprint(int number, long long *factpointeur) {
    printf("Factorial of %d is: %lld\n",number, *factpointeur);    
}

int main(int argc, char *argv[]) {
	int i = 1;
	long long fact = 1;
    int number = atoi(argv[1]);

	for(i=1; i <= number; i++) {
        multiply(&fact, i);
	}

    ownprint(number, &fact);
	return 0;  
}