#include "tigress.h"
#include <stdio.h>
#include <stdlib.h> 

int main(int argc, char* argv[]) {
	int a = 1;
  int b = -1;
  int c = 10;

  int plus = a + b;
  int plus_simple = a + 5;
  int plus_simple2 = 3 + 5;
  int moins = b - c;
  int fois = a * b;
  int div = c / b;
  int mod = c % a;
  int complexe = a + b - 1 * 40;

  int not_determined = a + atoi(argv[1]);

  printf("%d\n", plus);
  printf("%d\n", plus_simple);
  printf("%d\n", div);
  printf("%d\n", complexe);
  printf("%d\n", not_determined);

	return 0;
}
