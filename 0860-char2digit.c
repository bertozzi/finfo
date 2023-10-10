// conversione cifre come simboli in cifre come valore
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  char c1, c2;

  printf("Inserisci due cifre: ");
  scanf(" %c %c", &c1, &c2);

  printf("Hai inserito %c e %c, la loro somma e' -> %c\n", c1, c2, c1+c2); // FIXME, non esattamente quello che mi aspetterei...

  int n1, n2;

  n1 = c1 - '0'; // sottraggo al codice ASCII contenuto in c1 il codice ASCII del simbolo '0'
  n2 = c2 - '0'; // come sopra. 
  // nel caso dei simboli '0', '1', ... i corrispondenti codici ASCII sono in ordine e rispettivamente 48, 49, ...
  // quindi scrivere c1-'0' e' come scrivere c1-48. Se c1 contiene il codice ASCII di '0' ovvero 48 il risultato sara' 0
  // se c1 contiene il codice ASCII di '1' ovvero 49 il risultato sara' 1
  // ecc. ecc.

  printf("Ok il calcolo precedente era errato, la somma e' -> %d\n", n1+n2);

  return 0;
}

