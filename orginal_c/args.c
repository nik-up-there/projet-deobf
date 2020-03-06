#include "tigress.h"
#include <stdio.h>
#include <stdlib.h> 

int function_with_3_args(int cpt, char* str, long long pow) {
    int len = sizeof(str);
    long long value = cpt * len * pow;
	printf("value : %lld", value);    
	return 0;
}
