// scanf e letture multiple
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  int a,b,c,v;

  printf("Inserisci tre numeri interi:  ");

  v = scanf("%d%d%d", &a, &b, &c);

  printf("Hai inserito %d, %d e %d (v = %d)\n", a, b, c, v);



  return 0;
}

