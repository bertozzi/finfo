// cosa puo' stampare printf()?
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char **argv){

  float b = 45.56;
  int d=2;

  printf("A printf() posso passare un numero direttamente:       %f\n",   10.234);   
  printf("A printf() posso passare una espressione:              %f\n",   10.234/8.97*2);   
  printf("A printf() posso passare una variabile:                %f\n",   b);  // ma stampa 45.56? 
  printf("A printf() posso passare una espressione:              %f\n",   b*d);   
  printf("A printf() posso passare il risultato di una funzione: %f\n",   sqrt(b));   

  printf("Non c'e' limite al numero di specificatori b=%f, d=%d e b*d=%f\n", b, d, b*d);

  printf("Posso stampare anche il contenuto della stessa variabile tante volte quanto voglio %f %f %f %f %f %f\n", b, b, b, b, b, b);


  return 0;
}

/*

A printf() posso passare un numero direttamente:       10.234000
A printf() posso passare una espressione:              2.281828
A printf() posso passare una variabile:                45.560001
A printf() posso passare una espressione:              91.120003
A printf() posso passare il risultato di una funzione: 6.749815
Non c'e' limite al numero di specificatori b=45.560001, d=2 e b*d=91.120003
Posso stampare anche il contenuto della stessa variabile tante volte quanto voglio 45.560001 45.560001 45.560001 45.560001 45.560001 45.560001

*/

