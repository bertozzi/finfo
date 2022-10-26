// scanf
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  int c=12345;

  printf("c vale %d\n", c);

  printf("Inserisci un numero intero:  ");

  scanf("%d", &c);

  printf("c ora vale %d\n", c);



  return 0;
}

