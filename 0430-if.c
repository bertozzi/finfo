// valutazione condizioni: if() semplice
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  float dividendo, divisore;

  printf("Inserite dividendo e divisore: ");
  scanf("%f%f", &dividendo, &divisore);

  if(divisore) // XXX era if(divisore != 0) ma il fatto di essere gia' di per se' differente da 0 rende inutile il confronto
    printf("Il risultato di %f/%f e' %f\n", dividendo, divisore, dividendo/divisore);

  return 0;
}

