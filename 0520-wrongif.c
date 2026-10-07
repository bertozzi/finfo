// valutazione condizioni: if() errore comune!
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  float dividendo, divisore;

  printf("Inserite dividendo e divisore: ");
  scanf("%f%f", &dividendo, &divisore);
  
  //FIXME! il ';' vale come "istruzione nulla" e rende il tutto errato (ma purtroppo sintatticamente corretto)
  if(divisore != 0 );
    printf("Il risultato di %f/%f e' %f\n", dividendo, divisore, dividendo/divisore);

  return 0;
}

