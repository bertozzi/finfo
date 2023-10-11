// il tipo char
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  char c;

  printf("Inserisci un simbolo da tastiera: ");
  scanf("%c", &c);

  printf("Il simbolo [%c] ha codice ASCII %d\n", c, c);
 


  return 0;
}

