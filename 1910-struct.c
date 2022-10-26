// struct
#include<stdio.h>
#include<stdlib.h>

// le struct vanno, di norma, definite all'inizio del codice (o nei file .h)
struct phone_number
{
  unsigned short intlprefix;
  unsigned short prefix;
  unsigned int   number;
};

int main(int argc, char **argv){

  struct phone_number n;

  printf("inserisci prefisso internazionale: ");
  scanf("%hu", &n.intlprefix);

  printf("inserisci prefisso:                ");
  scanf("%hu", &n.prefix);

  printf("inserisci numero di telefono:      ");
  scanf("%u", &n.number);

  printf("Il numero inserito e': +%hu %hu %u\n", n.intlprefix, n.prefix, n.number);


  return 0;
}

