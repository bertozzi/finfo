// variabili locali e globali
#include <stdio.h>

// variabile globale (IL MALE)
int a = 33;

// funzione che semplicemente stampa quanto passato

void stampa(int x)
{
  printf("Mi e' stato passato                                    %d\n", x);
  printf("In questa funzione a vale                              %d\n", a++); // accedo e modifico variabile globale
  //printf("In questa funzione l vale %d\n", l); // FIXME non compilerebbe!

}
int main () {

  int l = 55; //variabile locale alla main

  printf ("valore di a all'inizio della main():                   %d\n",  a);
  stampa(l);
  printf ("valore di a dopo che ho chiamato la funzione stampa(): %d\n",  a);


  return 0;
}

/*
valore di a all'inizio della main():                   33
Mi e' stato passato                                    55
In questa funzione a vale                              33
valore di a dopo che ho chiamato la funzione stampa(): 34
*/

