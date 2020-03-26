#include <stdio.h>

int main(void)
{
  //sizeof is actually an operator in C. Not a function

  printf("The size of char: %lu\n", sizeof(char));
  printf("The size of unsigned char: %lu\n", sizeof(unsigned char));
  printf("The size of short int: %lu\n", sizeof(short int));
  printf("The size of unsigned short int: %lu\n", sizeof(unsigned short int));
  printf("The size of int: %lu\n", sizeof(int));
  printf("The size of unsigned int: %lu\n", sizeof(unsigned int));
  printf("The size of long int: %lu\n", sizeof(long int));
  printf("The size of unsigned long int: %lu\n", sizeof(unsigned long int));
  printf("The size of long long int: %lu\n", sizeof(long long int));
  printf("The size of unsigned long long int: %lu\n", sizeof(unsigned long long int));
  printf("The size of float: %lu\n", sizeof(float));
  printf("The size of double: %lu\n", sizeof(double));
  printf("The size of long double: %lu\n", sizeof(long double));

  // Try to guess and calculate what the range of values that can be stored
  // in each type listed above. Play with it by using those values
  return 0;
}