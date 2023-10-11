// valutazione condizioni: if() errore comune!
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  float dividendo, divisore;

  printf("Inserite dividendo e divisore: ");
  scanf("%f%f", &dividendo, &divisore);

  if(divisore != 0 );    //FIXME! il ';' vale come "istruzione nulla" e rende il tutto errato (ma purtroppo sintatticamente corretto)
    printf("Il risultato di %f/%f e' %f\n", dividendo, divisore, dividendo/divisore);

  return 0;
}

