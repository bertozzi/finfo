// numeri a virgola mobile e approssimazioni 
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  float a = 0.1;
  printf("a = %f\n", a);

  for(int i = 0; i < 40; ++i)
  {
    a = a + 0.1;
    printf("a = %f\n", a);
  }


  return 0;
}

