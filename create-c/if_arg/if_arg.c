#include <stdio.h>
#include <string.h>
#include "../../../tigress/3.1/tigress.h"

int main(int argc, char* argv[]){
  if(strcmp(argv[1], "1") == 0 ) {
    printf("true\n");
  } else {
    printf("false\n");
  }
  return 0;
}