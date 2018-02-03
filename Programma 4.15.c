#include <stdio.h>

int main () {
  int X, Y, Z;
  
  X = 21;
  Y = 6;
  Z = X &= Y;
  
  printf ("%d AND %d = %d", X, Y, Z);
  
  return 0;
  
  }
