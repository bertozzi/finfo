// valore restituito da scanf
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  int v, c=12345;

  printf("Inserisci un numero intero:  ");

  v = scanf("%d", &c);

  printf("Il numero che hai inserito e' %d (v=%d)\n", c, v);



  return 0;
}

