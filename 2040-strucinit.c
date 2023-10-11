// inizializzazione struct
#include<stdio.h>
#include<stdlib.h>

struct phone
{
  unsigned short intlprefix;
  unsigned short prefix;
  unsigned int   number;
};

int main(int argc, char **argv){

  struct phone n = {39, 329, 3507936}; 

  printf("Il numero definito e': +%hu %hu %u\n", n.intlprefix, n.prefix, n.number);


  return 0;
}

