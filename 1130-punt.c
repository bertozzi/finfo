// puntatore a variabile scalare, definizione e uso
#include<stdio.h>
#include<stdlib.h>

int a;

int main(int argc, char **argv){

  float x=3.14;

  float *px;

  printf("L'indirizzo di x  e'       %p\n", &x);
  printf("L'indirizzo di px e'       %p\n", &px);
  printf("px contiene                %p\n", px);

  px = &x;

  printf("dopo assegnamento px vale  %p\n", px);
  printf("*px mi restituisce         %f\n", *px);

  return 0;
}



