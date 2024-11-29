// quick check for power of 2 using bitwise operators
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  unsigned long x;
  printf("Enter an unsigned number: ");
  scanf("%ld", &x);

  // the approach exploits the property of powers of 2. In binary format they 
  // have only one bit set to 1. If you subract them 1 you need a borrow, namely
  // the result has all bits 1 up to the original 1 as example
  // 1024     in binary format is 10000000000
  // 1024 - 1 in binary format is 01111111111
  if(!(x & (x - 1)))
    printf("The number you entered is a power of 2\n");
  else
    printf("The number you entered is NOT a power of 2\n");


  return 0;
}

