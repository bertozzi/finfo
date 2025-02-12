// typedef struct
#include<stdio.h>
#include<stdlib.h>

// definire una struct usando typedef permette poi un uso piu' agevole
typedef struct 
{
  unsigned short intlprefix;
  unsigned short prefix;
  unsigned int   number;
} phone;

int main(int argc, char **argv){

  phone n; // di contro, dal solo uso non capiamo cosa sia "phone"

  printf("inserisci prefisso internazionale: ");
  scanf("%hu", &n.intlprefix);

  printf("inserisci prefisso:                ");
  scanf("%hu", &n.prefix);

  printf("inserisci numero di telefono:      ");
  scanf("%u", &n.number);

  printf("Il numero inserito e': +%hu %hu %u\n", n.intlprefix, n.prefix, n.number);


  return 0;
}

