#include<stdio.h>
#include<unistd.h>
#include<sys/time.h>
#include "tigress.h"

int main () {
  int x = getpid();
  printf("pid: %i\n", x);
  struct timeval tv;
  int y = gettimeofday(&tv, NULL);
  printf ("time of day: %ld.%06ld\n", tv.tv_sec, tv.tv_usec);
}
