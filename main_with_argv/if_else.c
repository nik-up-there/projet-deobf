#include "tigress.h"
#include <stdio.h>
#include <stdlib.h> 

int main(int argc, char *argv[]) {
	int number = atoi(argv[1]);

	if(number >= 10){
		printf("True");    
	} else {
		printf("False");
	}

	return 0;
}
