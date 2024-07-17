// overflow (traboccamento) di variabile intera
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  int n = 2147483646;

  printf(" n = %d\n", n);

  n = n + 1;
  printf(" n = %d\n", n);

  n = n + 1;
  printf(" n = %d\n", n);

  n = n + 1;
  printf(" n = %d\n", n);

  n = n + 1;
  printf(" n = %d\n", n);

  n = n - 10;
  printf(" n = %d\n", n);
 


  return 0;
}

/* 
 n = 2147483646
 n = 2147483647
 n = -2147483648
 n = -2147483647
 n = -2147483646
 n = 2147483640
*/

