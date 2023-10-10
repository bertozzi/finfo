// conversioni esplicite
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  int a = 42, b = 17;
  float ris;
  
  ris = (a/b);                  // a e b entrambi int -> nessuna conversione implicita, quindi divisione intera
  printf("42/17 = %f\n", ris);  // stampo 2.000000

  ris = (float)(a/b);           // come sopra ma dopo (e solo dopo) converto il risultato in float. Inutile, il calcolo lo avevo gia' fatto 
  printf("42/17 = %f\n", ris);  // stampo 2.000000  

  ris = a/(float)b;             // prima di usarlo converto il valore di b in float. Automaticamente anche il valore di a e' convertito in float
  printf("42/17 = %f\n", ris);  // stampo 2.47058

  ris = (float)a/(float)b;      // in questo caso converto entrambi i valori. A rigore non necessario.
  printf("42/17 = %f\n", ris);  // stampo 2.47058


  return 0;
}

/*
   OUTPUT

   42/17 = 2.000000
   42/17 = 2.000000
   42/17 = 2.470588
   42/17 = 2.470588

 */


