#include "tigress.h"
#include <stdio.h>
#include <stdlib.h> 

void call(){
  printf("call\n");
}

int return_int(){
  return 1;
}

void call_arg(int a){
  printf("%d\n", a);
}

int main(int argc, char* argv[]) {
  call();
  int res = return_int();
  call_arg(res);
	return 0;
}
