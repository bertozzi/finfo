// scanf e testo in stringa di formato, valore restituito da scanf()
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  int m=-1, d=-1, y=-1, r;

  printf("Inserisci una data nel formato gg/mm/yyy :  ");

  r=scanf("%02d/%02d/%04d", &d, &m, &y); // il valore di ritorno di scanf() permette di capire il corretto funzionamento

  printf("Hai inserito %d.%d.%d, r=%d\n", d, m, y, r);



  return 0;
}

