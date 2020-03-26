#include <stdio.h>

int main(void)
{
  double pi = 3.14;
  int almost_pi = 3.14;

  printf("double PI as double: %f\n", pi);
  printf("double PI as int   : %d\n", pi);

  printf("almost_pi as double: %f\n", almost_pi);
  printf("almost_pi as int   : %d\n", almost_pi);

  // Pay attention to all the compile warnings

  return 0;
}
