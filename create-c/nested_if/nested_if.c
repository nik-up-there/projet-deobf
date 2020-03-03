#include <stdio.h>
#include <string.h>
#include "../../../tigress/3.1/tigress.h"

int main(int argc, char* argv[]){
  int a = 1;
  char* b = "yes";
  unsigned long c = -1;
  if(strcmp(argv[1], "1") == 0 ) {
    if(1){
      if(a == 1) {
        if(strcmp(b, "yes") == 0) {
          printf("b true\n");
        } else if (c == -1) {
          printf("c true\n");
        } else {
          printf("a true\n");
        }
      }
    } else {
      printf("a false\n");
    }
  }
  return 0;
}

