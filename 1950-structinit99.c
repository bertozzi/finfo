// inizializzazione struct (C99 syntax)
#include<stdio.h>
#include<stdlib.h>

struct phone
{
  unsigned short intlprefix;
  unsigned short prefix;
  unsigned int   number;
};

int main(int argc, char **argv){

  struct phone n = {.prefix=329, .intlprefix=39, .number=3507936}; 

  printf("Il numero definito e': +%hu %hu %u\n", n.intlprefix, n.prefix, n.number);

  // anche parziale!
  struct phone wind_number = {.prefix=329};

  printf("Il numero parzialmente definito e': +%hu %hu %u\n", wind_number.intlprefix, wind_number.prefix, wind_number.number);

  return 0;
}

